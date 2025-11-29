@class AWEBinding;

@interface AFDCampaignCloseFriendPublishTask : AFDCampaignBaseTask

@property (retain, nonatomic) AWEBinding *draftModelStateBinding;
@property (nonatomic) BOOL outsideCloseFriend;

+ (id)topic;

- (void)receiveEvent:(id)a0 params:(id)a1;
- (void)p_handleMomentPublishNotification:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
