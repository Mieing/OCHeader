@class UIView, NSString, AWEFansPushReverseUrgeRewardView, AWEFansPushReverseAfterWeekDataController, UIImageView, UIButton, UITableView, AWEFansPushReverseInWeekDataController, NSObject, UILabel;

@interface AWEFansPushReverseViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEUserMessage, AWEFansPushReverseUrgeRewardViewDelegate>

@property (retain, nonatomic) AWEFansPushReverseInWeekDataController *inWeekDataController;
@property (retain, nonatomic) AWEFansPushReverseAfterWeekDataController *afterWeekDataController;
@property (retain, nonatomic) NSString *enterFrom;
@property (nonatomic) long long buttonType;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *inWeekLoadMoreFooter;
@property (retain, nonatomic) UIView *bottomContainerView;
@property (retain, nonatomic) UIButton *liveButton;
@property (retain, nonatomic) AWEFansPushReverseUrgeRewardView *rewardView;
@property (retain, nonatomic) UIImageView *clickedAvatarView;
@property (nonatomic) BOOL hasShownLoading;
@property (retain, nonatomic) NSObject *loadToken;
@property (nonatomic) double lastScrollOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (id)aweui_emptyPageBelowView;
- (void)p_reloadData;
- (void)p_endRefreshing;
- (id)initWithEnterFrom:(id)a0 type:(long long)a1;
- (void)p_enterProfileWith:(id)a0;
- (void)didClickIntroductionArea;
- (void)p_refreshData:(id /* block */)a0 atErrorState:(BOOL)a1;
- (void)p_videoButtonClicked;
- (void)p_liveButtonClicked;
- (void)trackRewardBubbleShow;
- (void)trackEnterReverseViewWithAmount:(long long)a0;
- (double)p_footerInset;
- (void)trackDidClickRewardIntroductionArea;
- (void)p_loadMoreDataWithCompletion:(id /* block */)a0;
- (id)_countToString:(long long)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)_setupUI;

@end
