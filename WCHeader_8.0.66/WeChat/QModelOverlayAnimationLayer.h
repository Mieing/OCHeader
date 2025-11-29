@protocol QModelOverlayAnimationLayerDelegate;

@interface QModelOverlayAnimationLayer : CALayer

@property (weak, nonatomic) id<QModelOverlayAnimationLayerDelegate> modelOverlayAnimDelegate;
@property (nonatomic) struct CGPoint { double x; double y; } coordinate;
@property (nonatomic) double modelRotation;

+ (BOOL)isMatchAnimKeys:(id)a0;
+ (BOOL)needsDisplayForKey:(id)a0;

- (void).cxx_destruct;

@end
