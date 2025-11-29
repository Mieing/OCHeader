@class UIView, NSString, IESLivePlaybackVideoCacheFooterView, UITapGestureRecognizer, NSArray, UIButton, IESLivePlaybackVideoCacheStatusErrorView, IESLivePlaybackVideoCacheHeaderView, IESLivePlaybackVideoCacheStatusEmptyView, UILabel, IESLivePlaybackPopupInsideTableView;

@interface IESLivePlaybackVideoListView : UIView <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate>

@property (retain, nonatomic) IESLivePlaybackPopupInsideTableView *tableView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) IESLivePlaybackVideoCacheHeaderView *headerView;
@property (retain, nonatomic) IESLivePlaybackVideoCacheFooterView *footerView;
@property (retain, nonatomic) IESLivePlaybackVideoCacheStatusErrorView *errorView;
@property (retain, nonatomic) IESLivePlaybackVideoCacheStatusEmptyView *emptyView;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) NSArray *models;
@property (copy, nonatomic) NSString *resolutionTitle;
@property (copy, nonatomic) id /* block */ retryBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ resolutionBlock;
@property (copy, nonatomic) id /* block */ didSelectItem;
@property (copy, nonatomic) id /* block */ cancelItem;
@property (copy, nonatomic) id /* block */ itemWillDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isLandscape;

- (void)didSetAttachingDIContext;
- (void)p_showLoadingView;
- (void)p_hideLoadingView;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)p_commonInit;

@end
