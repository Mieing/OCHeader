@class WCTimeLineFooterView, MMBGMSearchViewModel, UITableViewDiffableDataSource, MMBGMPanelPublishContext, NSString, MMBGMSelectedConfig, UITableView;
@protocol MMBGMSelectedSearchResultViewDelegate;

@interface MMBGMSelectedSearchResultView : MMUIView <MMBGMSearchViewModelDelegate, UITableViewDelegate, MMRefreshTableFooterDelegate, MMBGMSelectedTabTableViewCellDataReportSource, MMBGMSelectedTabTableViewCellDelegate, UITableViewDataSource, MMBGMSelectedSearchResultViewProtocol>

@property (retain, nonatomic) MMBGMSearchViewModel *viewModel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UITableViewDiffableDataSource *diffDataSource;
@property (retain, nonatomic) WCTimeLineFooterView *footerView;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) MMBGMPanelPublishContext *publishContext;
@property (retain, nonatomic) MMBGMSelectedConfig *config;
@property (weak, nonatomic) id<MMBGMSelectedSearchResultViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)setup;
- (void)setupView;
- (void)setupData;
- (void)unSelectedAllItem;
- (void)autoSetSelectedCellPlayingState;
- (void)autoStopSelectedCellPlayingState;
- (void)selectFirstMusicIfNeeded;
- (void)selectMusicAtIndex:(unsigned long long)a0;
- (id)musicDataAtIndex:(unsigned long long)a0;
- (BOOL)isLyricsCellType;
- (void)applyDiffSnapshot;
- (id)currentSelectedmusicData;
- (void)reload;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)onBgmSearchViewModelDataChange:(id)a0;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (void)onBgmSearchViewModel:(id)a0 didSearchWithKey:(id)a1;
- (unsigned long long)bgmSearchViewModelGetMaterialDuration:(id)a0;
- (unsigned long long)bgmSelectedTabTableViewCellGetTabType:(id)a0;
- (id)bgmSelectedTabTableViewCellGetSearchWord:(id)a0;
- (id)bgmSelectedTabTableViewCellGetPanelConfig:(id)a0;
- (void)onBgmCell:(id)a0 didClickEditMusic:(id)a1;
- (void)onBgmCell:(id)a0 didFavMusicData:(id)a1;
- (void)onBgmCell:(id)a0 didUnfavMusicData:(id)a1;
- (void)reset;
- (void)resetCurrentIndex;
- (BOOL)startSearchMusicWithKey:(id)a0;
- (void)startFooterViewLoading;
- (void)stopFooterViewLoading;
- (void).cxx_destruct;

@end
