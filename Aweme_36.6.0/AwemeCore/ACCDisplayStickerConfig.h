@interface ACCDisplayStickerConfig : ACCStickerConfig

@property (nonatomic) struct CGPoint { double x; double y; } alignPointOffset;
@property (nonatomic) BOOL syncAlignPosition;
@property (nonatomic) BOOL syncCoordinateChange;
@property (nonatomic) BOOL hideBGVisualEffect;
@property (nonatomic) BOOL shouldBGViewRasterize;
@property (nonatomic) double scalingRatio;
@property (nonatomic) BOOL forceFixLocation;

@end
