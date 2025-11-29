@class NSString, NSDictionary, BDSCDeviceStrategy, NSArray, NSMutableArray, BDByteCastService;

@interface BDSCDevice : NSObject <BDSCDeviceProtocol>

@property (retain, nonatomic) BDByteCastService *byteCastService;
@property (copy, nonatomic) NSString *realDeviceName;
@property (retain, nonatomic) BDSCDeviceStrategy *deviceStrategy;
@property (retain, nonatomic) NSMutableArray *tempPlayerArray;
@property (readonly, copy, nonatomic) NSString *ipAddress;
@property (nonatomic) unsigned long long heartBeatErrorCount;
@property (copy, nonatomic) NSString *fromProtocol;
@property (nonatomic) BOOL liveSupportSeek;
@property (readonly, nonatomic) BOOL supportToXsg;
@property (copy, nonatomic) NSString *sinkOSVersion;
@property (readonly, copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSDictionary *updatedParams;
@property (nonatomic) BOOL isFromPreSearch;
@property (nonatomic) BOOL isLastChoose;
@property (nonatomic) BOOL isCommon;
@property (nonatomic) long long showPriorityV2;
@property (copy, nonatomic) NSArray *tagList;
@property (readonly, copy, nonatomic) NSString *deviceName;
@property (readonly, copy, nonatomic) NSString *longDeviceName;
@property (readonly, nonatomic) unsigned long long source;
@property (readonly, nonatomic) long long deviceID;
@property (readonly, copy, nonatomic) NSDictionary *extraTrackParams;
@property (readonly, copy, nonatomic) NSString *deviceBrand;
@property (readonly, nonatomic) long long showPriority;
@property (readonly, copy, nonatomic) NSString *channel;
@property (readonly, copy, nonatomic) NSString *manufacturerName;
@property (readonly, nonatomic) long long sourceApp;
@property (readonly, nonatomic) unsigned long long protocolType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendMessage:(id)a0 withCallback:(id /* block */)a1;
- (BOOL)supportCustomCmd;
- (BOOL)supportSendMessage;
- (BOOL)getBoolValueForKey:(id)a0;
- (id)initWithByteCastService:(id)a0;
- (BOOL)isEqualToDict:(id)a0;
- (id)deviceValueForKey:(id)a0;
- (void)removeLelinkIfNeed;
- (BOOL)checkConnectSupportXsg;
- (id)model;
- (void).cxx_destruct;
- (id)manufacturer;
- (void)resetData;
- (BOOL)isEqualToDevice:(id)a0;
- (id)deviceData;
- (id)toDict;

@end
