@class UIColor;

@interface IESLiveCircleProgressViewConfig : NSObject

@property (nonatomic) double lineWidth;
@property (retain, nonatomic) UIColor *startColor;
@property (retain, nonatomic) UIColor *endColor;
@property (nonatomic) BOOL clockwise;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double backgroundLineWidth;

- (void).cxx_destruct;

@end
