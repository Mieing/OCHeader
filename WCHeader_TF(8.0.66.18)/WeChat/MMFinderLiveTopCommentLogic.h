@class NSString, MMFinderLiveTopCommentContentView, MMFinderLiveTaskId, NSMutableArray, NSMutableSet;

@interface MMFinderLiveTopCommentLogic : NSObject <IMMFontMgrExt, UIScrollViewDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) MMFinderLiveTopCommentContentView *containerView;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) NSMutableArray *notifyCommentItemArr;
@property (retain, nonatomic) NSMutableSet *commentMsgIdSet;
@property (retain, nonatomic) NSMutableSet *notifyProductIdSet;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) unsigned int displayDuration;
@property (nonatomic) BOOL isScrolling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContainerView:(id)a0 taskId:(id)a1;
- (void)onEnterLive;
- (void)onExitLive;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)startDisplayAnimated;
- (void)tryShowNextTopCommentWithExpectedPubbleCell:(id)a0;
- (BOOL)appendTopComment:(id)a0;
- (void)onNewNotifyCommentUpdate:(id)a0;
- (BOOL)innerAppendNewNotifyComments:(id)a0 filterRepeat:(BOOL)a1;
- (void)addTopComment:(id)a0;
- (void)onFontSizeChange;
- (id)getCommentArrayFilterRepeatCommit:(id)a0;
- (id)getCommentArrayFilterType:(id)a0 validType:(unsigned int)a1;
- (void).cxx_destruct;

@end
