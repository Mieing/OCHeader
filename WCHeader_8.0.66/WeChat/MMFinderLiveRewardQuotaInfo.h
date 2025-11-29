@class NSString;

@interface MMFinderLiveRewardQuotaInfo : NSObject <PBCoding>

@property (nonatomic) unsigned int lastExceedRewardQuotaRemindMsgTime;
@property (nonatomic) unsigned long long lastRewardQuota;
@property (nonatomic) unsigned long long lastWecoinBalance;
@property (nonatomic) BOOL lastFaceVaried;
@property (nonatomic) unsigned long long lastExceedRewardQuota;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_lastExceedRewardQuotaRemindMsgTime;
+ (void)PBArrayAdd_lastRewardQuota;
+ (void)PBArrayAdd_lastWecoinBalance;
+ (void)PBArrayAdd_lastFaceVaried;
+ (void)PBArrayAdd_lastExceedRewardQuota;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
