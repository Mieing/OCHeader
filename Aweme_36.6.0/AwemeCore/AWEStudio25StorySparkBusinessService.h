@class AWEStudio25StorySparkResourceModel, NSString, AWEStudio25StorySparkResourceLoadService, AWEStudio25StoryPublishSuccessNotificationHelper;

@interface AWEStudio25StorySparkBusinessService : NSObject <AWEStudio25StorySparkServiceProtocol>

@property (retain, nonatomic) AWEStudio25StorySparkResourceModel *sparkResourceModel;
@property (retain, nonatomic) AWEStudio25StorySparkResourceLoadService *resourceLoadService;
@property (retain, nonatomic) AWEStudio25StoryPublishSuccessNotificationHelper *notificationHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isFromSparkShareToStory25:(id)a0;
- (void)syncSparkTemplateDataToRepoModel:(id)a0;
- (void)executeWithComposer:(id)a0;
- (void)syncSparkResourceModelWithOther:(id)a0;
- (void)configDataEnterEditPage:(id)a0 composer:(id)a1;
- (void)configSparkInfoWith:(id)a0 resourceModel:(id)a1;
- (void)trackStartCamera;
- (void)trackCameraFirstFrameDuration:(double)a0;
- (void).cxx_destruct;
- (id)init;

@end
