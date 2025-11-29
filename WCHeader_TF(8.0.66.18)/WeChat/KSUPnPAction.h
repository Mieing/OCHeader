@class NSString, KSUPnPDeviceService, NSURL, KSUPnPDevice;

@interface KSUPnPAction : NSObject

@property (readonly, copy, nonatomic) NSString *serviceType;
@property (readonly, nonatomic) NSURL *controlURL;
@property (readonly, weak, nonatomic) KSUPnPDevice *device;
@property (readonly, nonatomic) KSUPnPDeviceService *service;
@property (readonly, copy, nonatomic) NSString *actionName;
@property (readonly, copy, nonatomic) NSString *instanceDescription;
@property (readonly, copy, nonatomic) NSString *propertiesDescription;

- (id)stringBySanitizingAndEscapingForXML:(id)a0;
- (id)initWithDevice:(id)a0 service:(id)a1;
- (id)generateXMLForAction;
- (id)generateXMLForActionArguments;
- (BOOL)parseActionBodyFromXMLData:(id)a0;
- (id)parseActionErrorFromXMLData:(id)a0;
- (void)takeActionWithCompletionHandler:(id /* block */)a0;
- (void)handleResponseWithRecord:(id)a0 response:(id)a1 data:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)callSuccessHandler:(id /* block */)a0 withRecord:(id)a1;
- (void)callFailureHandler:(id /* block */)a0 withRecord:(id)a1 error:(id)a2;
- (void).cxx_destruct;

@end
