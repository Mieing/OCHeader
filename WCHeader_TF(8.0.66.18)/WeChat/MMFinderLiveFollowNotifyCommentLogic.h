@class MMFinderLiveTaskId;
@protocol MMFinderLiveFollowNotifyCommentDelegate;

@interface MMFinderLiveFollowNotifyCommentLogic : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *finderTaskId;
@property (weak, nonatomic) id<MMFinderLiveFollowNotifyCommentDelegate> notifyDelegate;

- (id)initWithTaskId:(id)a0;
- (void)onEnterLive;
- (void)onExitLive;
- (void)onFollowNotifyMsgInfoDisplay:(id)a0;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)onGetFinderLiveFollowAppMsgWithTaskId:(id)a0 followAppMsg:(id)a1;
- (void).cxx_destruct;

@end
