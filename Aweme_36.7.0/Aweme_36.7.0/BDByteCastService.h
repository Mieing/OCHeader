@class BDLEService, NSString, NSDictionary, BDDlnaService, BDLinkDevice, BDAirPlayDevice;

@interface BDByteCastService : NSObject

@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) NSString *ipAddress;
@property (readonly, copy, nonatomic) NSString *data;
@property (readonly, copy, nonatomic) NSString *modelName;
@property (readonly, copy, nonatomic) NSString *modelNumber;
@property (readonly, copy, nonatomic) NSString *modelURL;
@property (readonly, copy, nonatomic) NSString *manufacturer;
@property (readonly, copy, nonatomic) NSString *manufacturerURL;
@property (readonly, copy, nonatomic) NSString *serviceRef;
@property (readonly, copy, nonatomic) NSDictionary *serviceExtraMetadata;
@property (readonly, copy, nonatomic) NSDictionary *deviceParamsDictionary;
@property (retain, nonatomic) BDDlnaService *dlnaService;
@property (retain, nonatomic) BDLinkDevice *bdlinkDevice;
@property (retain, nonatomic) BDAirPlayDevice *airPlayDevice;
@property (retain, nonatomic) BDLEService *bdleService;
@property (copy, nonatomic) NSString *connectId;
@property (readonly, nonatomic) unsigned long long sdkType;

+ (id)defaultAirPlayService:(id)a0;

- (id)initWithContextId:(id)a0;
- (id)protocolsVersion;
- (BOOL)isEqualToByteCastService:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
