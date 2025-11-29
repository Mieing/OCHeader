@class NSString, AWETeenExternalAlbumPanelViewController, AWETeenExternalAlbumDataController, AWEPageContext, DUXContentSheet, UIViewController;
@protocol AWEAwemeDetailTableViewControllerProtocol, AWEFeedTableViewCellViewControllerProtocol;

@interface AWETeenExternalAlbumTableController : AWEBaseController <AWEFeedTableViewCellControllerPlayerDelegate, DUXSheetDelegate>

@property (nonatomic) BOOL didSyncEpisode;
@property (nonatomic) BOOL didSyncProgress;
@property (retain, nonatomic) AWEPageContext *pageContext;
@property (retain, nonatomic) id<AWEFeedTableViewCellViewControllerProtocol> cellViewController;
@property (retain, nonatomic) AWETeenExternalAlbumDataController *dataController;
@property (weak, nonatomic) UIViewController<AWEAwemeDetailTableViewControllerProtocol> *detailTableVC;
@property (retain, nonatomic) AWETeenExternalAlbumPanelViewController *albumPanelVC;
@property (retain, nonatomic) DUXContentSheet *albumPanelSheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isTeenExternalAlbumPanelShowing;
+ (id)detailTableViewControllerWithAlbumModel:(id)a0 logExtra:(id)a1 updateModelBlk:(id /* block */)a2;
+ (id)detailTableViewControllerWithAlbumModel:(id)a0 initialIndex:(long long)a1 initialEpisodeID:(id)a2 logExtra:(id)a3 updateModelBlk:(id /* block */)a4;
+ (id)detailTableViewControllerWithAlbumModel:(id)a0 logExtra:(id)a1;
+ (id)detailTableViewControllerWithAlbumModel:(id)a0 initialIndex:(long long)a1 initialEpisodeID:(id)a2 logExtra:(id)a3;

- (void)cellViewControllerDidRenderFirstFrame:(id)a0;
- (void)sheetDidDismiss:(id)a0;
- (void)showPanel;
- (void)initialDataSourceFetchDidFinished;
- (void)videoControllerWillStartNextLoop:(id)a0;
- (void)dismissPanel;
- (void)panelChooseEpisode:(id)a0;
- (id)createAlbumPanelVC;
- (id)createAlbumPanelSheetWithPanelVC:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;

@end
