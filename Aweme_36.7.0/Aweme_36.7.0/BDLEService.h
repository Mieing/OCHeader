@class NSString, BDLEMessageBus, BDCLUPnPServer, NSNumber, BDCLUPnPItem;

@interface BDLEService : NSObject {
    NSString *_serviceRef;
    NSString *_serviceBrand;
    NSString *_serviceModel;
    NSString *_serviceAppVersion;
    NSString *_serviceSdkVersion;
    NSString *_serviceOsVersion;
}

@property (retain, nonatomic) BDCLUPnPItem *upnPDevice;
@property (nonatomic) BOOL isMessageBusV2;
@property (retain, nonatomic) BDCLUPnPServer *upnpServer;
@property (retain, nonatomic) BDLEMessageBus *messageBus;
@property (readonly, copy, nonatomic) NSString *ipAddress;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) NSString *serviceRef;
@property (readonly, copy, nonatomic) NSString *modelName;
@property (readonly, copy, nonatomic) NSString *modelNumber;
@property (readonly, copy, nonatomic) NSString *modelURL;
@property (readonly, copy, nonatomic) NSString *manufacturer;
@property (readonly, copy, nonatomic) NSString *manufacturerURL;
@property (readonly, nonatomic) int bdleSocketPort;
@property (readonly, copy, nonatomic) NSString *bdleSocketRef;
@property (readonly, copy, nonatomic) NSString *serviceUniRef;
@property (readonly, copy, nonatomic) NSString *serviceBrand;
@property (readonly, copy, nonatomic) NSString *serviceModel;
@property (readonly, nonatomic) NSNumber *serviceBitmap;
@property (readonly, copy, nonatomic) NSString *serviceAppVersion;
@property (readonly, copy, nonatomic) NSString *serviceSdkVersion;
@property (readonly, copy, nonatomic) NSString *serviceOsVersion;

- (id)eventExtraDictionary;
- (id)initWithDevice:(id)a0 contextId:(id)a1;
- (void)sendGetDeviceInfo:(id /* block */)a0;
- (BOOL)isEqualToBDLEService:(id)a0;
- (void)setServiceRef:(id)a0 brand:(id)a1 model:(id)a2;
- (void)setServiceAppVersion:(id)a0 sdkVersion:(id)a1 osVersion:(id)a2;
- (void)sendGetStatusInfo:(id)a0 completion:(id /* block */)a1;
- (void)sendGetMediaInfo:(id)a0 completion:(id /* block */)a1;
- (void)sendGetStatusAndMediaInfo:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)localDeviceInfo;

@end
