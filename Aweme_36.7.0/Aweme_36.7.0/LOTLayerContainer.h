@class NSString, LOTMaskContainer, LOTRenderGroup, CALayer, LOTTransformInterpolator, NSDictionary, LOTNumberInterpolator, NSNumber;

@interface LOTLayerContainer : CALayer {
    LOTTransformInterpolator *_transformInterpolator;
    LOTNumberInterpolator *_opacityInterpolator;
    NSNumber *_inFrame;
    NSNumber *_outFrame;
    CALayer *DEBUG_Center;
    LOTRenderGroup *_contentsGroup;
    LOTMaskContainer *_maskLayer;
}

@property (readonly, nonatomic) NSString *layerName;
@property (retain, nonatomic) NSNumber *currentFrame;
@property (readonly, nonatomic) NSNumber *timeStretchFactor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewportBounds;
@property (readonly, nonatomic) CALayer *wrapperLayer;
@property (readonly, nonatomic) NSDictionary *valueInterpolators;
@property (nonatomic) BOOL asyncLoadingResource;
@property (copy, nonatomic) id /* block */ asyncLoadingCallback;

+ (BOOL)needsDisplayForKey:(id)a0;

- (id)currentFrame;
- (void)setCurrentFrame:(id)a0;
- (void)setValueDelegate:(id)a0 forKeypath:(id)a1;
- (void)displayWithFrame:(id)a0 forceUpdate:(BOOL)a1;
- (void)searchNodesForKeypath:(id)a0;
- (void)commonInitializeWith:(id)a0 inLayerGroup:(id)a1;
- (void)_setImageForAsset:(id)a0;
- (void)buildContents:(id)a0;
- (void)displayWithFrame:(id)a0;
- (id)initWithModel:(id)a0 inLayerGroup:(id)a1;
- (void).cxx_destruct;
- (id)initWithLayer:(id)a0;
- (void)display;
- (id)actionForKey:(id)a0;

@end
