@class NSArray, QAnimation;

@interface QVectorHeatOverlayOption : NSObject

@property (retain, nonatomic) NSArray *colors;
@property (retain, nonatomic) NSArray *startPoints;
@property (nonatomic) double minIntensity;
@property (nonatomic) double maxIntensity;
@property (nonatomic) int type;
@property (nonatomic) double size;
@property (nonatomic) double gap;
@property (nonatomic) double opacity;
@property (nonatomic) double minZoom;
@property (nonatomic) double maxZoom;
@property (nonatomic) double minHeight;
@property (nonatomic) double maxHeight;
@property (nonatomic) BOOL enable3D;
@property (retain, nonatomic) QAnimation *animation;

- (id)init;
- (void)setColors:(id)a0 startPoints:(id)a1;
- (void)setMinIntensity:(double)a0 maxIntensity:(double)a1;
- (void).cxx_destruct;

@end
