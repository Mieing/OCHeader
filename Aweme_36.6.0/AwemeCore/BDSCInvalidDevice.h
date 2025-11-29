@class NSString, NSArray, BDSCDeviceStrategy, NSDictionary;

@interface BDSCInvalidDevice : NSObject <BDSCDeviceProtocol>

@property (copy, nonatomic) NSString *deviceName;
@property (retain, nonatomic) BDSCDeviceStrategy *deviceStrategy;
@property (nonatomic) unsigned long long heartBeatErrorCount;
@property (nonatomic) BOOL liveSupportSeek;
@property (nonatomic) BOOL isFromPreSearch;
@property (nonatomic) BOOL isLastChoose;
@property (nonatomic) BOOL isCommon;
@property (nonatomic) long long showPriorityV2;
@property (copy, nonatomic) NSArray *tagList;
@property (readonly, copy, nonatomic) NSString *longDeviceName;
@property (readonly, copy, nonatomic) NSString *realDeviceName;
@property (readonly, nonatomic) unsigned long long source;
@property (readonly, copy, nonatomic) NSString *ipAddress;
@property (readonly, nonatomic) long long deviceID;
@property (readonly, copy, nonatomic) NSDictionary *extraTrackParams;
@property (readonly, copy, nonatomic) NSString *deviceBrand;
@property (readonly, nonatomic) long long showPriority;
@property (readonly, copy, nonatomic) NSString *channel;
@property (readonly, copy, nonatomic) NSString *modelName;
@property (readonly, copy, nonatomic) NSString *manufacturerName;
@property (readonly, nonatomic) long long sourceApp;
@property (readonly, copy, nonatomic) NSString *sinkOSVersion;
@property (readonly, nonatomic) unsigned long long protocolType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendMessage:(id)a0 withCallback:(id /* block */)a1;
- (BOOL)supportCustomCmd;
- (BOOL)supportSendMessage;
- (BOOL)getBoolValueForKey:(id)a0;
- (BOOL)isEqualToDict:(id)a0;
- (id)deviceValueForKey:(id)a0;
- (void).cxx_destruct;
- (void)resetData;
- (BOOL)isEqualToDevice:(id)a0;
- (id)toDict;
- (id)initWithDeviceName:(id)a0;

@end
