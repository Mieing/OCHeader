@class LOTNumberInterpolator, LOTSizeInterpolator, NSString, LOTPointInterpolator;

@interface LOTTransformInterpolator : NSObject

@property (retain, nonatomic) LOTTransformInterpolator *inputNode;
@property (readonly, nonatomic) LOTPointInterpolator *positionInterpolator;
@property (readonly, nonatomic) LOTPointInterpolator *anchorInterpolator;
@property (readonly, nonatomic) LOTSizeInterpolator *scaleInterpolator;
@property (readonly, nonatomic) LOTNumberInterpolator *rotationInterpolator;
@property (readonly, nonatomic) LOTNumberInterpolator *positionXInterpolator;
@property (readonly, nonatomic) LOTNumberInterpolator *positionYInterpolator;
@property (retain, nonatomic) NSString *parentKeyName;

+ (id)transformForLayer:(id)a0;

- (BOOL)hasUpdateForFrame:(id)a0;
- (id)initWithPosition:(id)a0 rotation:(id)a1 anchor:(id)a2 scale:(id)a3;
- (id)initWithPositionX:(id)a0 positionY:(id)a1 rotation:(id)a2 anchor:(id)a3 scale:(id)a4;
- (void)initializeWithPositionX:(id)a0 positionY:(id)a1 position:(id)a2 rotation:(id)a3 anchor:(id)a4 scale:(id)a5;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })transformForFrame:(id)a0;
- (void).cxx_destruct;

@end
