@class NSString, NSDictionary, NSURL, BDCLServiceModel, NSMutableDictionary;

@interface BDCLUPnPItem : NSObject {
    long long _checkCounter;
}

@property (copy, nonatomic) NSString *ipAddress;
@property (nonatomic) long long port;
@property (retain, nonatomic) NSString *deviceKey;
@property (nonatomic) BOOL isMediaRender;
@property (copy, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSURL *location;
@property (copy, nonatomic) NSString *URLHeader;
@property (copy, nonatomic) NSString *friendlyName;
@property (copy, nonatomic) NSString *sinkVersion;
@property (copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSString *modelNumber;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *modelURL;
@property (copy, nonatomic) NSString *manufacturer;
@property (copy, nonatomic) NSString *manufacturerURL;
@property (copy, nonatomic) NSString *httpHeaderServer;
@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSString *sinkCustomVersion;
@property (nonatomic) BOOL supportSubscriber;
@property (copy, nonatomic) NSDictionary *deviceParamsDictionary;
@property (retain, nonatomic) BDCLServiceModel *AVTransport;
@property (retain, nonatomic) BDCLServiceModel *RenderingControl;
@property (retain, nonatomic) BDCLServiceModel *CustomizedService;
@property (nonatomic) long long checkCounter;
@property (nonatomic) int customizedServiceVersion;
@property (copy, nonatomic) NSString *subscribeUUID;
@property (nonatomic) BOOL isSubscribed;
@property (copy, nonatomic) NSString *applicationUrl;
@property (retain, nonatomic) BDCLServiceModel *dialService;
@property (readonly, nonatomic) BOOL isDialServiceType;
@property (readonly, nonatomic) BOOL supportBDLEProtocol;
@property (nonatomic) int bdleSocketPort;
@property (copy, nonatomic) NSString *bdleSocketRef;
@property (nonatomic) BOOL bdleServicePreparing;
@property (nonatomic) BOOL bdleServiceAvailable;
@property (retain, nonatomic) NSMutableDictionary *avtScpdActionMap;

- (id)initWithContextId:(id)a0;
- (id)URLHeaderComponents;
- (void)setArray:(id)a0 withRootElement:(id)a1;
- (void)parseAvtScpdActionList:(id)a0;
- (id)itemRefString;
- (void).cxx_destruct;
- (id)description;

@end
