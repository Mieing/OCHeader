@class NSString, NSMutableArray, NSMapTable;
@protocol MAOverlayContainerViewDelegate;

@interface MAOverlayContainerView2 : NSObject <MAOverlayManagerDelegate> {
    int _particleOverlayCount;
    struct IOverlayManager { void /* function */ **x0; } *_overlayManager;
    struct MAOverlayManagerDelegate_iOS { void /* function */ **x0; id x1; } *_cppDelegate;
    struct IResourceReader { void /* function */ **x0; } *_resourceReader;
    NSMutableArray *_addedOverlays;
    NSMutableArray *_internalOverlays;
    NSMapTable *_overlayRenderersMap;
    int _zIndexMax;
    int _zIndexMin;
}

@property (weak, nonatomic) id<MAOverlayContainerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginOurOwnCommandEncoder:(BOOL)a0;
- (void)endOurOwnCommandEncoder:(BOOL)a0;
- (void *)getCppOverlayRendererDelegate;
- (struct IOverlayRenderer { void /* function */ **x0; } *)createRendererForOverlay:(struct IOverlay { void /* function */ **x0; } *)a0;
- (BOOL)hookRenderring:(struct IOverlayRenderer { void /* function */ **x0; } *)a0;
- (void)setNeedRefresh;
- (void *)getCommandEncoder;
- (BOOL)shouldDecreaseFrame;
- (id)responseToBeforePoint:(struct CGPoint { double x0; double x1; })a0;
- (void)onReloadMapNotification;
- (id)overlaysInCppLevel:(int)a0;
- (void)doAddOverlay:(id)a0 level:(long long)a1 zIndex:(int)a2;
- (void)doRemoveOverlay:(id)a0;
- (void)onIndexOverflow;
- (id)initWithMapService:(id)a0;
- (void)exchangeOverlayAtIndex:(unsigned long long)a0 withOverlayAtIndex:(unsigned long long)a1 level:(long long)a2;
- (void)removeAllOverlays;
- (void)drawOverlaysInLevel:(long long)a0;
- (void)drawCustomLabelLayer;
- (void)addInternalOverlay:(id)a0;
- (void)removeInternalOverlay:(id)a0;
- (void)clearInternalOverlays;
- (void)drawInternalOverlays;
- (id)getHittedPolylinesWith:(struct CLLocationCoordinate2D { double x0; double x1; })a0 traverseAll:(BOOL)a1;
- (void)onTappedWithMapPoint:(struct MAMapPoint { double x0; double x1; })a0;
- (void)prepareRender;
- (id)overlays;
- (void).cxx_destruct;
- (void)insertOverlay:(id)a0 belowOverlay:(id)a1;
- (void)removeOverlay:(id)a0;
- (void)insertOverlay:(id)a0 aboveOverlay:(id)a1;
- (void)dealloc;
- (void)addOverlay:(id)a0;
- (void)addOverlays:(id)a0;
- (void)addOverlay:(id)a0 level:(long long)a1;
- (void)addOverlays:(id)a0 level:(long long)a1;
- (void)insertOverlay:(id)a0 atIndex:(unsigned long long)a1 level:(long long)a2;
- (void)removeOverlays:(id)a0;
- (void)insertOverlay:(id)a0 atIndex:(unsigned long long)a1;
- (void)exchangeOverlay:(id)a0 withOverlay:(id)a1;
- (id)overlaysInLevel:(long long)a0;
- (id)drawableForOverlay:(id)a0;

@end
