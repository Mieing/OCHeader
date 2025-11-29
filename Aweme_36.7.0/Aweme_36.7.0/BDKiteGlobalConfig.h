@class NSDictionary, NSString, NSArray;

@interface BDKiteGlobalConfig : NSObject

@property (readonly, copy, nonatomic) NSDictionary *collectSettings;
@property (readonly, nonatomic) BOOL collectEnable;
@property (readonly, copy, nonatomic) NSString *collectVersion;
@property (readonly, nonatomic) unsigned long long collectDelaySeconds;
@property (readonly, nonatomic) unsigned long long collectRetryCount;
@property (readonly, nonatomic) unsigned long long collectRetryInterval;
@property (readonly, copy, nonatomic) NSDictionary *collectEnableCollectArray;
@property (readonly, nonatomic) BOOL collectEnableTrack;
@property (readonly, copy, nonatomic) NSArray *collectR1TeamCheckArray;
@property (readonly, nonatomic) double collectR1SemaphoreTime;
@property (readonly, nonatomic) double collectExcuteTimeInterval;
@property (readonly, nonatomic) long long collectLocalReportFlag;
@property (readonly, nonatomic) BOOL sdkEnable;
@property (readonly, copy, nonatomic) NSString *version;
@property (copy) NSDictionary *settings;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *channel;

+ (id)sharedInstance;

- (void)refreshSettings:(id)a0;
- (id)uaidSettings;
- (BOOL)uaidEnable;
- (double)uaidExcuteTimeInterval;
- (id)chinaMobileCarrierName;
- (id)chinaTelecomCarrierName;
- (id)chinaUnicomCarrierName;
- (BOOL)uaidMobileEnable;
- (BOOL)uaidTelecomeEnable;
- (unsigned long long)uaidNetRetryCount;
- (unsigned long long)uaidNetRetryInterval;
- (id)uaidMobileAppId;
- (id)uaidMobileAppKey;
- (id)uaidTelecomAppId;
- (id)uaidTelecomPubKey;
- (id)uaidTelecomSecret;
- (long long)uaidNetChangedDelayRetryTime;
- (void).cxx_destruct;
- (id)init;

@end
