@class MMFinderLiveTaskId;
@protocol MMFinderLiveInteractionNotifyCommentDelegate;

@interface MMFinderLiveInteractionNotifyCommentLogic : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *finderTaskId;
@property (weak, nonatomic) id<MMFinderLiveInteractionNotifyCommentDelegate> notifyDelegate;

- (id)initWithTaskId:(id)a0;
- (void)onEnterLive;
- (void)onExitLive;
- (void)onInteractionNotifyMsgInfoDisplay:(id)a0;
- (void)onGetFinderLiveInteractionMsg:(id)a0;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)onGetFinderLiveInteractionAppMsgWithTaskId:(id)a0 interactionAppMsg:(id)a1;
- (void).cxx_destruct;

@end
