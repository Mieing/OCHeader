@class MMTimer, MMFinderLiveFeedStreamBarrageCommentView, MMLiveTaskId, NSString, NSMutableArray;
@protocol MMFinderLiveFeedStreamBarrageViewModelDelegate;

@interface MMFinderLiveFeedStreamBarrageViewModel : NSObject <MMFinderLiveFeedStreamBarrageModelExt>

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (retain, nonatomic) MMTimer *triggerTimer;
@property (nonatomic) BOOL barrageStarted;
@property (retain, nonatomic) NSMutableArray *barrageWaitingArray;
@property (nonatomic) unsigned long long nextAppendHistoryBarrageTime;
@property (weak, nonatomic) id<MMFinderLiveFeedStreamBarrageViewModelDelegate> delegate;
@property (weak, nonatomic) MMFinderLiveFeedStreamBarrageCommentView *barrageCommentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)filterUnValidMsg:(id)a0;
+ (unsigned long long)getFeedStreamBarrageCommentLengthLimit;
+ (unsigned long long)getFeedStreamBarrageCommentCacheLimit;

- (id)init;
- (void)registerExtensions;
- (void)updateWithTaskId:(id)a0;
- (void)resetFeedStreamTaskId;
- (void)startBarrage;
- (void)stopBarrage;
- (void)onBarrageCommentViewDidSelectedItem:(id)a0 itemframe:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)resetBarrageData;
- (double)triggerInterval;
- (id)getBarrageCommentViewContainer;
- (void)setupMenuController:(id)a0 menuItems:(id)a1 targetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)flushWaitingArrayAsync;
- (void)realFlushWaitingArray;
- (void)onLikeBarrageComment;
- (void)onMoreBarrageComment;
- (void)onCopyBarrageAction:(id)a0;
- (void)onCloseBarrageAction;
- (void)onComplaintBarrageAction:(id)a0;
- (void)onLiveFeedStreamCommentDataItemsUpdate:(id)a0 taskId:(id)a1 isHistoryMsg:(BOOL)a2;
- (void)onMenuControllerTouchAtNoneMenuArea;
- (void)reportOnBarrageCommentClicked;
- (void).cxx_destruct;

@end
