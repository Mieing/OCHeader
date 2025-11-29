@class UIColor;

@interface AWEAdPlayerBottomGradientProcessorResult : NSObject

@property (nonatomic) double resultAlpha;
@property (nonatomic) double brightness;
@property (nonatomic) BOOL canHide;
@property (retain, nonatomic) UIColor *colorRGB;

+ (id)resultWithBuild:(id /* block */)a0;

- (void).cxx_destruct;

@end
