@class AWELandscapeContext, AWELandscapePageContext, AWELandscapePreloadController, AWELandscapeMediumVideoPlayerCellPreloadController, UIViewController;
@protocol AWEAwemePlayVideoViewControllerProtocol, AWEPlayVideoViewControllerProtocol, AWEAwemeBizPlayVideoProtocol;

@interface AWELandscapeSectionController : AWEBaseListSectionController

@property (retain, nonatomic) AWELandscapePreloadController *preloadManager;
@property (retain, nonatomic) AWELandscapeMediumVideoPlayerCellPreloadController *mediumCellPreloadManager;
@property (retain, nonatomic) UIViewController<AWEAwemePlayVideoViewControllerProtocol, AWEAwemeBizPlayVideoProtocol, AWEPlayVideoViewControllerProtocol> *playerViewController;
@property (retain, nonatomic) AWELandscapeContext *landscapeContext;
@property (retain, nonatomic) AWELandscapePageContext *pageContext;

+ (Class)aAWEPadModuleAdapterClass;

- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (void)viewControllerDidAppear:(BOOL)a0;
- (void)viewControllerDidDisappear:(BOOL)a0;
- (id)aAWEPadModuleAdapter;
- (void)configPreloadManager;
- (void)configBaseCell:(id)a0 index:(long long)a1 model:(id)a2;
- (id)preloadModelAtIndex:(long long)a0;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;

@end
