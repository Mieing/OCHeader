@interface AFDCampaignOuterPushTask : AFDCampaignBaseTask

+ (id)topic;
+ (BOOL)persistent;

- (void)restoredFromStorage;
- (void)p_onApplicationDidBecomeActiveNotification:(id)a0;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
