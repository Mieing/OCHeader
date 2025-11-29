@class IESECLLDCLynxManager, IESECPdpGalleryConfig, NSMutableDictionary, NSString, NSMutableArray;
@protocol IESECPreviewSliceManagerServeice;

@interface IESECMediaPreviewPendantsCompoent : IESECMediaPreviewBaseComponent <IESECPdpStdLynxElementDelegate>

@property (retain, nonatomic) NSMutableDictionary *showActionMap;
@property (weak, nonatomic) id<IESECPreviewSliceManagerServeice> sliceManager;
@property (retain, nonatomic) IESECLLDCLynxManager *lynxManager;
@property (retain, nonatomic) NSMutableDictionary *pendantsItemMap;
@property (retain, nonatomic) IESECPdpGalleryConfig *pendantsConfig;
@property (retain, nonatomic) NSMutableArray *cacheElements;
@property (nonatomic) BOOL findSameAnimationDidFinish;
@property (nonatomic) long long findSameEntryAnimationStage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } coverRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidConstructJSRuntime:(id)a0 withElement:(id)a1;
- (void)previewViewDidLoad;
- (void)previewDidZoom:(BOOL)a0 index:(long long)a1;
- (void)previewScrollViewIsScrollingWithCurIndex:(long long)a0 nextIndex:(long long)a1 didZoom:(BOOL)a2;
- (void)previewDidStartTransiting;
- (void)previewDidEndTransiting:(BOOL)a0 index:(long long)a1;
- (void)tapShowAllVideos:(BOOL)a0;
- (void)findSameEntryShowStage:(long long)a0 WithIndex:(long long)a1;
- (void)currentImageViewAtIndex:(long long)a0 width:(double)a1 height:(double)a2;
- (void)insertShowActionWithSliceDict:(id)a0;
- (void)triggerWithSliceId:(id)a0;
- (void)setupPendants;
- (id)skuPreviewView;
- (void)updatePendantsHiddenWithCurrentIndex:(long long)a0 nextIndex:(long long)a1 didZoom:(BOOL)a2;
- (void)updatePendantsViewHiddenStatusTo:(BOOL)a0;
- (void)registerLynxPendant;
- (void)loadElement:(id)a0;
- (void)setupConstraintsForView:(id)a0 withElement:(id)a1;
- (void)loadCacheElements;
- (BOOL)isGalleryPicElement:(id)a0;
- (void)updatePendantsHiddenWithCurrentIndex:(long long)a0 nextIndex:(long long)a1 didZoom:(BOOL)a2 filter:(id /* block */)a3;
- (id)storageItemWithLynxElement:(id)a0;
- (void)changeStorageItemHiddenStatusTo:(BOOL)a0 withStorageItem:(id)a1;
- (BOOL)handleDelayDisplayElementWith:(id)a0;
- (void)trySendAppearNotificationToLynxElement:(id)a0;
- (void).cxx_destruct;

@end
