@class MMUIButton, WCTimeLineFooterView, NSMutableArray, UIView, NSString, MMTableView, MMLiveTaskId, MMUILabel, MMCPLabel, NSData, MMLoadingView, MMLiveHalfScreenTitleBarView, UIImageView;
@protocol MMLiveRewardGainRecordsViewDelegate;

@interface MMLiveRewardGainRecordsView : MMLiveHalfScreenPanelView <MMLiveHalfScreenTitleBarViewDelegate, MMLiveRewardGainRecordCellDelegate, UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate>

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (retain, nonatomic) UIView *statisticsView;
@property (retain, nonatomic) MMUIButton *introductionButton;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) MMUILabel *totalGiftGainValueLabel;
@property (retain, nonatomic) MMLoadingView *loadingView;
@property (retain, nonatomic) MMCPLabel *emptyTitleLabel;
@property (retain, nonatomic) WCTimeLineFooterView *footerView;
@property (retain, nonatomic) MMLiveHalfScreenTitleBarView *titleBar;
@property (retain, nonatomic) NSMutableArray *rewardGainsInfoList;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned long long rewardTotalAmountInWecoin;
@property (retain, nonatomic) MMTableView *giftGainRecordsTableView;
@property (weak, nonatomic) id<MMLiveRewardGainRecordsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)dealloc;
- (void)initView;
- (void)layoutContentView;
- (void)layoutSubviews;
- (void)setExtraCellLineHidden:(id)a0;
- (void)onIntroductionButtonClick;
- (void)onLiveGiftGainRecordCellHeadImageClicked:(id)a0;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)a0;
- (void)openWithAnimation:(BOOL)a0 completeBlock:(id /* block */)a1;
- (void)closeWithAnimation:(BOOL)a0;
- (void)reloadData;
- (void)fetchRewardGainsInfoList;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
