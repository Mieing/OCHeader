@interface WXGRoamUtility : NSObject

+ (BOOL)shouldNeedFullDiff;
+ (void)setRecoverTimeWithUsernames:(id)a0 recoverTime:(unsigned long long)a1;
+ (id)getRecoverInfo;
+ (void)setNeedFullDiff;
+ (void)resetNeedFullDiff;
+ (id)fullDiffStateKey;
+ (id)getRelatedMemoryKV;

- (void)triggerLocalNetworkAlert;
- (void)triggerLocalNetworkAlertSync;

@end
