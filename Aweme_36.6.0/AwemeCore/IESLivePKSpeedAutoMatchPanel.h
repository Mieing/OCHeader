@class UIView, IESLiveTableViewCellDisplayTrackHelper, NSString, IESLivePKSpeedAutoMatchViewModel, UITableView, IESLiveAnimatedImageView, UILabel, UIScrollView;
@protocol IESLiveCompoundSubscription, IESLivePKProvider;

@interface IESLivePKSpeedAutoMatchPanel : HTSLivePopUpView <UITableViewDelegate, UITableViewDataSource, IESLiveTableViewCellDisplayTrackHelperDelegate>

@property (retain, nonatomic) IESLivePKSpeedAutoMatchViewModel *viewModel;
@property (retain, nonatomic) UIView *speedContainerView;
@property (retain, nonatomic) UILabel *predictWaitLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *processExplainLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) IESLiveAnimatedImageView *speedAnimView;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (nonatomic) BOOL isSticky;
@property (retain, nonatomic) IESLiveTableViewCellDisplayTrackHelper *tableViewTrackHelper;
@property (nonatomic) BOOL isSeasonMatchType;
@property (retain, nonatomic) UIView *remainingEndContainerView;
@property (retain, nonatomic) id<IESLivePKProvider> pkProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindAction;
- (void)setUpData;
- (BOOL)trackDisplayedCellWithIndexPath:(id)a0;
- (void)layoutBaseUI;
- (void)updateWithViewModel;
- (id)countDownStr:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 roomModel:(id)a1 DIContext:(id)a2;
- (long long)getCurrentRemainTime;
- (void)updateProcessExplainLabelWithRemainTime:(long long)a0 layoutBaseUI:(BOOL)a1;
- (void)updateStickyTitleWithRemainTime:(long long)a0;
- (void)updateViewWithRemainTime:(long long)a0 layoutBaseUI:(BOOL)a1;
- (void)fetchInviteList;
- (void)updateSpeedUpView;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)dealloc;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)didTapCancelButton;

@end
