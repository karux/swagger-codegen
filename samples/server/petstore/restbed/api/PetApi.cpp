/**
 * Swagger Petstore
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include <corvusoft/restbed/byte.hpp>
#include <corvusoft/restbed/string.hpp>
#include <corvusoft/restbed/settings.hpp>
#include <corvusoft/restbed/request.hpp>

#include "PetApi.h"

namespace io {
namespace swagger {
namespace server {
namespace api {

using namespace io::swagger::server::model;

PetApi::PetApi() {
	std::shared_ptr<PetApiPetResource> spPetApiPetResource = std::make_shared<PetApiPetResource>();
	this->publish(spPetApiPetResource);
	
	std::shared_ptr<PetApiPetPetIdResource> spPetApiPetPetIdResource = std::make_shared<PetApiPetPetIdResource>();
	this->publish(spPetApiPetPetIdResource);
	
	std::shared_ptr<PetApiPetFindByStatusResource> spPetApiPetFindByStatusResource = std::make_shared<PetApiPetFindByStatusResource>();
	this->publish(spPetApiPetFindByStatusResource);
	
	std::shared_ptr<PetApiPetFindByTagsResource> spPetApiPetFindByTagsResource = std::make_shared<PetApiPetFindByTagsResource>();
	this->publish(spPetApiPetFindByTagsResource);
	
	std::shared_ptr<PetApiPetPetIdUploadImageResource> spPetApiPetPetIdUploadImageResource = std::make_shared<PetApiPetPetIdUploadImageResource>();
	this->publish(spPetApiPetPetIdUploadImageResource);
	
}

PetApi::~PetApi() {}

void PetApi::startService(int const& port) {
	std::shared_ptr<restbed::Settings> settings = std::make_shared<restbed::Settings>();
	settings->set_port(port);
	settings->set_root("/v2");
	
	this->start(settings);
}

void PetApi::stopService() {
	this->stop();
}

PetApiPetResource::PetApiPetResource()
{
	this->set_path("/pet/");
	this->set_method_handler("POST",
		std::bind(&PetApiPetResource::POST_method_handler, this,
			std::placeholders::_1));
	this->set_method_handler("PUT",
		std::bind(&PetApiPetResource::PUT_method_handler, this,
			std::placeholders::_1));
}

PetApiPetResource::~PetApiPetResource()
{
}

void PetApiPetResource::POST_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
	// Body params are present, therefore we have to fetch them
	int content_length = request->get_header("Content-Length", 0);
	session->fetch(content_length,
		[ this ]( const std::shared_ptr<restbed::Session> session, const restbed::Bytes & body )
		{

			const auto request = session->get_request();
			std::string requestBody = restbed::String::format("%.*s\n", ( int ) body.size( ), body.data( ));
			/**
			 * Get body params or form params here from the requestBody string
			 */
			
			

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 405) {
				session->close(405, "Invalid input", { {"Connection", "close"} });
				return;
			}

		});
}

void PetApiPetResource::PUT_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
	// Body params are present, therefore we have to fetch them
	int content_length = request->get_header("Content-Length", 0);
	session->fetch(content_length,
		[ this ]( const std::shared_ptr<restbed::Session> session, const restbed::Bytes & body )
		{

			const auto request = session->get_request();
			std::string requestBody = restbed::String::format("%.*s\n", ( int ) body.size( ), body.data( ));

			
		
			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 400) {
				session->close(400, "Invalid ID supplied", { {"Connection", "close"} });
				return;
			}
			if (status_code == 404) {
				session->close(404, "Pet not found", { {"Connection", "close"} });
				return;
			}
			if (status_code == 405) {
				session->close(405, "Validation exception", { {"Connection", "close"} });
				return;
			}

		});
}


PetApiPetPetIdResource::PetApiPetPetIdResource()
{
	this->set_path("/pet/{petId: .*}/");
	this->set_method_handler("DELETE",
		std::bind(&PetApiPetPetIdResource::DELETE_method_handler, this,
			std::placeholders::_1));
	this->set_method_handler("GET",
		std::bind(&PetApiPetPetIdResource::GET_method_handler, this,
			std::placeholders::_1));
	this->set_method_handler("POST",
		std::bind(&PetApiPetPetIdResource::POST_method_handler, this,
			std::placeholders::_1));
}

PetApiPetPetIdResource::~PetApiPetPetIdResource()
{
}

void PetApiPetPetIdResource::DELETE_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
			
			// Getting the path params
			const int64_t petId = request->get_path_parameter("petId", 0L);
			

			// Getting the headers
			const std::string apiKey = request->get_header("apiKey", "");
			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 400) {
				session->close(400, "Invalid pet value", { {"Connection", "close"} });
				return;
			}

}

void PetApiPetPetIdResource::GET_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();

			// Getting the path params
			const int64_t petId = request->get_path_parameter("petId", 0L);
			
		
			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				std::shared_ptr<Pet> response = NULL;
				session->close(200, "successful operation", { {"Connection", "close"} });
				return;
			}
			if (status_code == 400) {
				session->close(400, "Invalid ID supplied", { {"Connection", "close"} });
				return;
			}
			if (status_code == 404) {
				session->close(404, "Pet not found", { {"Connection", "close"} });
				return;
			}

}
void PetApiPetPetIdResource::POST_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();

			// Getting the path params
			const int64_t petId = request->get_path_parameter("petId", 0L);
			
		
			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 405) {
				session->close(405, "Invalid input", { {"Connection", "close"} });
				return;
			}

}


PetApiPetFindByStatusResource::PetApiPetFindByStatusResource()
{
	this->set_path("/pet/findByStatus/");
	this->set_method_handler("GET",
		std::bind(&PetApiPetFindByStatusResource::GET_method_handler, this,
			std::placeholders::_1));
}

PetApiPetFindByStatusResource::~PetApiPetFindByStatusResource()
{
}

void PetApiPetFindByStatusResource::GET_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
			
			
			// Getting the query params

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				session->close(200, "successful operation", { {"Connection", "close"} });
				return;
			}
			if (status_code == 400) {
				session->close(400, "Invalid status value", { {"Connection", "close"} });
				return;
			}

}



PetApiPetFindByTagsResource::PetApiPetFindByTagsResource()
{
	this->set_path("/pet/findByTags/");
	this->set_method_handler("GET",
		std::bind(&PetApiPetFindByTagsResource::GET_method_handler, this,
			std::placeholders::_1));
}

PetApiPetFindByTagsResource::~PetApiPetFindByTagsResource()
{
}

void PetApiPetFindByTagsResource::GET_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
			
			
			// Getting the query params

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				session->close(200, "successful operation", { {"Connection", "close"} });
				return;
			}
			if (status_code == 400) {
				session->close(400, "Invalid tag value", { {"Connection", "close"} });
				return;
			}

}



PetApiPetPetIdUploadImageResource::PetApiPetPetIdUploadImageResource()
{
	this->set_path("/pet/{petId: .*}/uploadImage/");
	this->set_method_handler("POST",
		std::bind(&PetApiPetPetIdUploadImageResource::POST_method_handler, this,
			std::placeholders::_1));
}

PetApiPetPetIdUploadImageResource::~PetApiPetPetIdUploadImageResource()
{
}

void PetApiPetPetIdUploadImageResource::POST_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
			
			// Getting the path params
			const int64_t petId = request->get_path_parameter("petId", 0L);
			

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				session->close(200, "successful operation", { {"Connection", "close"} });
				return;
			}

}




}
}
}
}

