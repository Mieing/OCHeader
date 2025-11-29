@class MMFinderLiveNotifyCommentLogic, UIView, MMFinderLiveKeepDisplayCommentTableViewModel, MMTableView;

@interface MMFinderLivePublicCommentContentView : MMFinderLiveCommentContentView

@property (retain, nonatomic) UIView *notifyCommentContentContainerView;
@property (nonatomic) double currentNotifyCommentContentViewHeight;
@property (retain, nonatomic) MMFinderLiveKeepDisplayCommentTableViewModel *keepDisplayCommentTableViewModel;
@property (retain, nonatomic) MMTableView *keepDisplayCommentTableView;
@property (retain, nonatomic) UIView *notifyCommentContentView;
@property (retain, nonatomic) MMFinderLiveNotifyCommentLogic *notifyCommentLogic;
@property (copy, nonatomic) id /* block */ notifyCommentLogicCreateBlock;

- (id)initWithTaskId:(id)a0;
- (void)layoutUI;
- (void)layoutNotifyCommentContentView;
- (void)layoutNotifyCommentContentContainerView:(double)a0;
- (void)layoutKeepDisplayCommentTableView;
- (void)updateKeepDisplayCommentTableViewOrigin;
- (void)createKeepDisplayCommentTableViewIfNeeded;
- (void)createKeepDisplayCommentTableViewModelIfNeeded;
- (void)reportExpose:(id)a0;
- (void)checkCommentContentTopIsChanged;
- (void)innerCheckCommentContentTopIsChanged;
- (double)getNotifyAreaHeight;
- (void)updateKeepDisplayCommentViewOnCommentDisabled:(BOOL)a0;
- (void)checkSelfHasConsumeTouch:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)reloadKeepDisplayDataIfNeed;
- (double)commentContentViewTop;
- (double)commentTableWidth;
- (void)layoutNotifyContentView;
- (void)changeNotifyContentViewSuperview:(id)a0;
- (void)updateNotifyContentViewDisplay;
- (void)hideNotifyContentView;
- (void).cxx_destruct;

@end
