@class UIView, MMMusicLiveCommentStatusView, NSString, MMMusicLiveCommentCommonNoticeView, MMMusicLiveCommentUnreadMentionView, MMMusicLiveCommentModel, CAGradientLayer, MMTableView;
@protocol MMMusicLiveCommentViewDelegate;

@interface MMMusicLiveCommentView : UIView <UITableViewDelegate, UITableViewDataSource, MMMusicLiveCommentModelDelegate, MMusicLiveCommentCommonDelegate, MMMusicLiveCommentUnreadMentionViewDelegate>

@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) CAGradientLayer *fadeOutLayer;
@property (retain, nonatomic) MMMusicLiveCommentCommonNoticeView *noticeView;
@property (retain, nonatomic) MMMusicLiveCommentUnreadMentionView *unreadMentionView;
@property (nonatomic) long long maxDisplayIndex;
@property (nonatomic) BOOL isScrollingToBottom;
@property (weak, nonatomic) id<MMMusicLiveCommentViewDelegate> delegate;
@property (retain, nonatomic) MMMusicLiveCommentModel *model;
@property (retain, nonatomic) MMMusicLiveCommentStatusView *statusView;
@property (nonatomic) BOOL notJustShowPeopleCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 model:(id)a1;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)layoutUnreadView;
- (void)adjustContentHeight:(BOOL)a0;
- (void)notifyCommentViewContentChanged;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)isTableViewAtBottom;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)showNextNotice;
- (void)liveCommentModelDidAppendData:(id)a0;
- (void)liveCommentModelDidAddNotice:(id)a0;
- (void)liveCommentModel:(id)a0 didModifiedDataAt:(unsigned long long)a1;
- (void)onCommentLongPressed:(id)a0;
- (void)onCommentClicked:(id)a0;
- (void)onCommentDetailViewClicked:(id)a0;
- (void)onTapUnreadMention;
- (void).cxx_destruct;

@end
