@class UIColor;

@interface ACCEditPageStrokeConfig : NSObject

@property (nonatomic) double width;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) int lineJoin;

+ (id)strokeWithWidth:(double)a0 color:(id)a1 lineJoin:(int)a2;

- (void).cxx_destruct;

@end
