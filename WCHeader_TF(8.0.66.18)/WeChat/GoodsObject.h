@interface GoodsObject : WXPBGeneratedMessage

@property (nonatomic) float relativeMinx;
@property (nonatomic) float relativeMiny;
@property (nonatomic) float relativeMaxx;
@property (nonatomic) float relativeMaxy;
@property (nonatomic) float score;
@property (nonatomic) unsigned int minx;
@property (nonatomic) unsigned int miny;
@property (nonatomic) unsigned int maxx;
@property (nonatomic) unsigned int maxy;
@property (nonatomic) float centerX;
@property (nonatomic) float centerY;
@property (nonatomic) float objW;
@property (nonatomic) float objH;

+ (void)initialize;

@end
