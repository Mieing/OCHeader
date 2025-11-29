@class NSString;

@interface AFDCampaignPublishStoryTask : AFDCampaignBaseTask <AWEPublishTaskMessage>

@property (nonatomic) long long activityVideoType;
@property (nonatomic) BOOL hasShownPrivacyToast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)topic;
+ (BOOL)persistent;

- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (id)persistentParams;
- (void)receiveEvent:(id)a0 params:(id)a1;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
