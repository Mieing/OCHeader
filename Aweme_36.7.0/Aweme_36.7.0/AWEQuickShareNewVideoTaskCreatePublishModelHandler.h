@class NSString, AWEQuickShareTaskCreatePublishModelResult, AWEQuickShareTaskPrepareResult;

@interface AWEQuickShareNewVideoTaskCreatePublishModelHandler : NSObject <AWEQuickShareNewTaskCreatePublishModelService>

@property (retain, nonatomic) AWEQuickShareTaskCreatePublishModelResult *result;
@property (retain, nonatomic) AWEQuickShareTaskPrepareResult *prepareResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithStoryModel:(id)a0;
- (void)createWithPrepareResult:(id)a0 storyModel:(id)a1;
- (void)updateTitleWithPublishModel:(id)a0 storyModel:(id)a1;
- (BOOL)initCustomLayoutWithStoryModel:(id)a0 publishModel:(id)a1 error:(id *)a2;
- (void)updateResultWithPublishModel:(id)a0 error:(id)a1;
- (id)quickShareDownloaderTrackInfo:(id)a0;
- (void)initParameterizedCreationWithEditComposer:(id)a0 publishComposer:(id)a1 storyModel:(id)a2 duration:(double)a3;
- (id)coverModelWithStoryModel:(id)a0 publishModel:(id)a1 userIconImage:(id)a2 originVideoCoverImage:(id)a3;
- (void).cxx_destruct;

@end
