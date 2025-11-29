@class NSString, NSDictionary, BDCLUPnPServer, BDCLUPnPItem;

@interface BDDlnaService : NSObject

@property (retain, nonatomic) BDCLUPnPItem *upnPDevice;
@property (nonatomic) BOOL isPlayable;
@property (readonly, copy, nonatomic) NSString *ipAddress;
@property (readonly, nonatomic) long long port;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) NSString *serviceRef;
@property (readonly, copy, nonatomic) NSString *sinkVersion;
@property (readonly, copy, nonatomic) NSString *modelName;
@property (readonly, copy, nonatomic) NSString *modelNumber;
@property (readonly, copy, nonatomic) NSString *modelURL;
@property (readonly, copy, nonatomic) NSString *manufacturer;
@property (readonly, copy, nonatomic) NSString *manufacturerURL;
@property (readonly, copy, nonatomic) NSDictionary *deviceParamsDictionary;
@property (readonly, copy, nonatomic) NSString *httpHeaderServer;
@property (nonatomic) long long playRefCounter;
@property (nonatomic) long long checkCounter;
@property (retain, nonatomic) BDCLUPnPServer *upnpServer;
@property (readonly, nonatomic) int customizedServiceVersion;
@property (readonly, nonatomic) BOOL supportCustomizedService;
@property (readonly, nonatomic) NSString *data;
@property (readonly, nonatomic) NSString *sinkCustomVersion;

- (id)initWithUpnPDevice:(id)a0 andContextId:(id)a1 isPlayable:(BOOL)a2;
- (BOOL)isEqualToDlnaService:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
