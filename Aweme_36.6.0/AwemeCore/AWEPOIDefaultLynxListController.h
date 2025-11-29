@class NSString, POIMediaListPageContext, POIMediaListMediaModel, AWEUILoadingView, UIViewController;
@protocol POIMediaListDataControllerProtocol, POIMediaListViewControllerProtocol;

@interface AWEPOIDefaultLynxListController : NSObject <POIMediaListControllerProtocol>

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) POIMediaListMediaModel *lastMedia;
@property (nonatomic) BOOL hasRecordFirstMedia;
@property (nonatomic) BOOL hasRecordVideoFirstPlay;
@property (retain, nonatomic) id<POIMediaListDataControllerProtocol> dataController;
@property (weak, nonatomic) POIMediaListPageContext *context;
@property (weak, nonatomic) UIViewController<POIMediaListViewControllerProtocol> *vc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onScrollDidEnd:(id)a0;
- (void)buildLoadingView;
- (void)resetLoadingView;
- (void)didEndReload;
- (void)initializeExtension;
- (void)trackMediaShow:(id)a0;
- (void)trackMediaEnter:(id)a0;
- (id)getMediaType:(id)a0;
- (id)commonTrackParamsWithMedia:(id)a0;
- (void)playerWillPlayFirstFrame:(id)a0;
- (void)albumPlayerDidScroll:(id)a0 index:(long long)a1 isAuto:(BOOL)a2;
- (void)didTapErrorPlaceholderButton:(id)a0;
- (BOOL)shouldFooterContainerStickBottom;
- (BOOL)shouldShowPagingView;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;

@end
