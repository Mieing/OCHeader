@class MMFinderLiveTaskId;
@protocol MMFinderLiveLikeV2NotifyCommentDelegate;

@interface MMFinderLiveLikeV2NotifyCommentLogic : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *finderTaskId;
@property (weak, nonatomic) id<MMFinderLiveLikeV2NotifyCommentDelegate> notifyDelegate;

- (id)initWithTaskId:(id)a0;
- (void)onEnterLive;
- (void)onExitLive;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)onGetFinderLiveLikeV2AppMsgWithTaskId:(id)a0 likeV2AppMsg:(id)a1;
- (void).cxx_destruct;

@end
