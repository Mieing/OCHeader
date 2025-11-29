@class UIImage, CAGradientLayer, UIColor;

@interface AWERatingViewRenderConfig : NSObject

@property (retain, nonatomic) UIImage *filledImage;
@property (retain, nonatomic) UIImage *emptyImage;
@property (nonatomic) struct CGSize { double width; double height; } starSize;
@property (nonatomic) long long numberOfStars;
@property (nonatomic) double starSpace;
@property (nonatomic) unsigned long long ratingType;
@property (nonatomic) BOOL userInteractive;
@property (retain, nonatomic) CAGradientLayer *filledImageGradientColorLayer;
@property (retain, nonatomic) CAGradientLayer *emptyImageGradientColorLayer;
@property (retain, nonatomic) UIColor *filledImageColor;
@property (retain, nonatomic) UIColor *emptyImageColor;

+ (id)defaultConfig;

- (void).cxx_destruct;

@end
