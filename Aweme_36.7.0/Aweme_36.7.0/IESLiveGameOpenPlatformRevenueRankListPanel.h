@class IESLiveGameOpenPlatformRevenueRankViewModel, IESLiveGameOpenPlatformPanelLoadingView, IESLiveEmptyView, IESLivePopupItem, UIView, IESLiveEmptyViewConfig, IESLiveGameOpenPlatformRevenueRankList, IESLiveGameOpenPlatformRevenueRankTitleView, UIImageView, NSString, IESLiveGameOpenPlatformPanelToolView;

@interface IESLiveGameOpenPlatformRevenueRankListPanel : NSObject <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) IESLivePopupItem *popupItem;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) IESLiveGameOpenPlatformRevenueRankTitleView *titleView;
@property (retain, nonatomic) IESLiveGameOpenPlatformRevenueRankList *listView;
@property (retain, nonatomic) IESLiveGameOpenPlatformRevenueRankViewModel *rankViewModel;
@property (retain, nonatomic) IESLiveGameOpenPlatformPanelLoadingView *loadingView;
@property (retain, nonatomic) IESLiveEmptyView *errorView;
@property (retain, nonatomic) IESLiveEmptyViewConfig *errorViewConfig;
@property (retain, nonatomic) IESLiveEmptyView *emptyView;
@property (retain, nonatomic) IESLiveEmptyViewConfig *emptyViewConfig;
@property (retain, nonatomic) IESLiveGameOpenPlatformPanelToolView *toolView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (copy, nonatomic) id /* block */ onHideBlock;
@property (copy, nonatomic) id /* block */ onShowBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)attachingDIContext;
- (void)onShow:(id /* block */)a0;
- (void)onHide:(id /* block */)a0;
- (void)notifySonicPanelSwitchOrientation:(unsigned long long)a0 fromOrientation:(unsigned long long)a1;
- (void)reloadData;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)hide;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)show;

@end
