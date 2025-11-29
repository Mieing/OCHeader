@class IESECPdpGalleryBottomConfig, NSMutableDictionary, UIStackView;
@protocol IESECPreviewSliceManagerServeice;

@interface IESECMediaPreviewBottomComponent : IESECMediaPreviewBaseComponent

@property (retain, nonatomic) UIStackView *bottomBarStackView;
@property (retain, nonatomic) NSMutableDictionary *showActionMap;
@property (retain, nonatomic) IESECPdpGalleryBottomConfig *bottomConfig;
@property (weak, nonatomic) id<IESECPreviewSliceManagerServeice> sliceManager;

- (void)setupBottom;
- (void)previewViewDidLoad;
- (void)previewScrollViewIsScrollingWithCurIndex:(long long)a0 nextIndex:(long long)a1 didZoom:(BOOL)a2;
- (void)previewDidStartTransiting;
- (void)previewDidEndTransiting:(BOOL)a0 index:(long long)a1;
- (void)updateGallery:(id)a0;
- (void)previewAddCartSuccess;
- (void)updateBottomBarWithIndex:(long long)a0 nextIndex:(long long)a1;
- (void)insertShowActionWithSliceDict:(id)a0;
- (void)triggerWithSliceId:(id)a0;
- (void).cxx_destruct;

@end
