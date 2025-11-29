@class WCTimeLineFooterView, UITableViewDiffableDataSource, NSString, WCFinderAnimationLoadingView, MMBGMPanelPublishContext, UITableView, UILabel, MMBGMSelectedTabViewModel;
@protocol MMBGMSelectedTabManagerDelegate;

@interface MMBGMSelectedTabManager : NSObject <UITableViewDelegate, MMBGMSelectedTabViewModelDelegate, MMRefreshTableFooterDelegate, MMBGMSelectedTabTableViewCellDataReportSource, MMBGMSelectedTabTableViewCellDelegate, MMBGMTabManagerProtocol>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) WCTimeLineFooterView *footerView;
@property (retain, nonatomic) UITableViewDiffableDataSource *diffDataSource;
@property (retain, nonatomic) UILabel *noMusicTipsLabel;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (retain, nonatomic) MMBGMSelectedTabViewModel *viewModel;
@property (nonatomic) long long currentIndex;
@property (nonatomic) BOOL isAutoStopped;
@property (weak, nonatomic) id<MMBGMSelectedTabManagerDelegate> delegate;
@property (retain, nonatomic) MMBGMPanelPublishContext *publishContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTabModel:(id)a0;
- (void)autoSetSelectedCellPlayingState;
- (void)autoStopSelectedCellPlayingState;
- (void)selectFirstMusicIfNeeded;
- (void)selectMusicAtIndex:(unsigned long long)a0;
- (id)musicDataAtIndex:(unsigned long long)a0;
- (void)startLoadingAnimation;
- (void)manualSetCellAtIndex:(unsigned long long)a0 isSelected:(BOOL)a1;
- (void)onSwitchToThisPage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewFrame;
- (BOOL)isLyricsCellType;
- (void)setSelfViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toSuperView:(id)a1;
- (void)updateTableViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reloadTableView;
- (void)applyDiffSnapshot;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)onBgmCell:(id)a0 didClickEditMusic:(id)a1;
- (void)onBgmCell:(id)a0 didFavMusicData:(id)a1;
- (void)onBgmCell:(id)a0 didUnfavMusicData:(id)a1;
- (void)musicTabVMDataChange:(id)a0;
- (void)handleMusicTabVMDataChange:(id)a0;
- (unsigned long long)musicTabVMGetMaterialDuration:(id)a0;
- (id)currentSelectedMusicData;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (unsigned long long)bgmSelectedTabTableViewCellGetTabType:(id)a0;
- (id)bgmSelectedTabTableViewCellGetSearchWord:(id)a0;
- (id)bgmSelectedTabTableViewCellGetPanelConfig:(id)a0;
- (void)setAllCellUnSelected;
- (void)forceDeselectAllVisibleCells;
- (void).cxx_destruct;

@end
