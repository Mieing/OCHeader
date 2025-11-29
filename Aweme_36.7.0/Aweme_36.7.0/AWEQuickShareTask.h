@class ACCEditorSilentPublisher, AWEVideoPublishViewModel;
@protocol AWEQuickShareTaskDelegate, AWEShareToStoryModelProtocol;

@interface AWEQuickShareTask : NSObject

@property (weak, nonatomic) id<AWEQuickShareTaskDelegate> delegate;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) id<AWEShareToStoryModelProtocol> storyModel;
@property (retain, nonatomic) ACCEditorSilentPublisher *silentPublisher;

- (void)prepareAndStart;
- (void)doPublish;
- (id)initWithStoryModel:(id)a0;
- (void).cxx_destruct;
- (void)prepare;
- (void)start;
- (BOOL)isEqual:(id)a0;
- (void)cancel;

@end
