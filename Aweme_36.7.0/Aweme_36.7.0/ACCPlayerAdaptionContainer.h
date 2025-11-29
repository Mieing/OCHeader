@class NSValue, NSString, UIView;

@interface ACCPlayerAdaptionContainer : UIView <ACCPlayerAdaptionContainerProtocol>

@property (retain, nonatomic) UIView *bubbleContainerView;
@property (retain, nonatomic) UIView *topMask;
@property (retain, nonatomic) UIView *bottomMask;
@property (retain, nonatomic) UIView *leftMask;
@property (retain, nonatomic) UIView *rightMask;
@property (retain, nonatomic) UIView *playerContainerView;
@property (nonatomic) BOOL needMask;
@property (nonatomic) BOOL needAdaptScreen;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } standPlayerFrame;
@property (nonatomic) BOOL ignoreMaskRadiusForXScreen;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalFrame;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } mediaCenter;
@property (readonly, nonatomic) UIView *playerPreviewView;
@property (readonly, nonatomic) NSValue *playerFrame;
@property (readonly, nonatomic) UIView *overlayView;
@property (nonatomic) BOOL optimizeOffScreenRender;
@property (nonatomic) BOOL useRefactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 allowMask:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })playerRect;
- (void)configWithPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 needMask:(BOOL)a1;
- (void)updateContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 playerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 allowMask:(BOOL)a2;
- (void)clearMasks;
- (void)configEdgeMasksWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 playerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)makeMaskLayerForTopWithRadius:(double)a0;
- (void)makeMaskLayerForBottomWithRadius:(double)a0;
- (id)createMask;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
