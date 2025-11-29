@class MMFinderLiveLikeMsgInfo, MMFinderLiveTaskId;
@protocol MMFinderLiveLikeNotifyCommentDelegate;

@interface MMFinderLiveLikeNotifyCommentLogic : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *finderTaskId;
@property (nonatomic) unsigned int lastDisplayMsgId;
@property (retain, nonatomic) MMFinderLiveLikeMsgInfo *preparingDisplayLikeMsgInfo;
@property (weak, nonatomic) id<MMFinderLiveLikeNotifyCommentDelegate> notifyDelegate;

- (id)initWithTaskId:(id)a0;
- (void)onEnterLive;
- (void)onExitLive;
- (void)onLikeMsgInfoDisplay:(id)a0;
- (void)onLikeMsgInfoOut:(id)a0;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)updatePreparingDisplayLikeMsgInfoFromRemote:(id)a0;
- (BOOL)updatePreparingDisplayLikeMsgInfo:(id)a0;
- (void)delayClearPreparingDisplayLikeMsg;
- (void)invokeClearPreparingDisplayLikeMsg;
- (double)getClearDelayTime;
- (void)onGetFinderLiveLikeAppMsgWithTaskId:(id)a0 likeAppMsg:(id)a1;
- (void).cxx_destruct;

@end
