@class IESLiveEmptyView, IESLiveEmptyViewConfig, NSArray, IESLiveWebpLoadingView, NSString, UITableView, PlaylistTab, UIColor;
@protocol UIScrollViewDelegate, IESLiveListViewDelegate;

@interface IESLiveListView : UIView <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) IESLiveEmptyView *emptyView;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingIndicator;
@property (copy, nonatomic) NSArray *sectionArray;
@property (retain, nonatomic) IESLiveEmptyViewConfig *emptyViewConfig;
@property (retain, nonatomic) UIColor *baseColor;
@property (nonatomic) double lastContentOffsetY;
@property (weak, nonatomic) id<IESLiveListViewDelegate> delegate;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL isFavoriteButtonHidden;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) PlaylistTab *category;
@property (copy, nonatomic) NSString *identifiyTitle;
@property (weak, nonatomic) id<UIScrollViewDelegate> scrollDelegate;
@property (nonatomic) BOOL redundantReload;
@property (nonatomic) BOOL visibleCellIndexPathNoUpdatedAfterFetchFlag;
@property (nonatomic) long long scaleRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startLoading:(id)a0;
- (void)updateEmptyConfig:(id)a0;
- (void)loadDataWithSections:(id)a0;
- (void)loadMoreDone:(BOOL)a0;
- (void)addLoadMoreBlock:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1 isSoloKTV:(BOOL)a2;
- (void)updateLoadingResultStatus;
- (void)addRefreshBlock:(id /* block */)a0;
- (void)scrollViewDidScrollToTop:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)startLoading;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)stopLoading;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)cleanData;

@end
