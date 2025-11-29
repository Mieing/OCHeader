@class UIColor;

@interface VEPaintConfig : NSObject

@property (retain, nonatomic) UIColor *color;
@property (nonatomic) float strokeStep;
@property (nonatomic) float strokeSize;
@property (nonatomic) float featherSize;
@property (nonatomic) float speedInfluence;
@property (nonatomic) int type;

- (id)paintConfigToStr;
- (void).cxx_destruct;
- (id)init;

@end
