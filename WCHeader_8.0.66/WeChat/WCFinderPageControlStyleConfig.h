@class UIColor;

@interface WCFinderPageControlStyleConfig : NSObject

@property (nonatomic) double dotSize;
@property (retain, nonatomic) UIColor *dotNormalColor;
@property (retain, nonatomic) UIColor *dotHighlightColor;
@property (nonatomic) double dotsHorizontalPadding;
@property (nonatomic) double dotsVerticalPadding;
@property (retain, nonatomic) UIColor *dotNormalShadowColor;
@property (retain, nonatomic) UIColor *dotHighlightShadowColor;
@property (nonatomic) struct CGSize { double width; double height; } dotShadowOffset;
@property (nonatomic) double dotShadowRadius;

+ (id)defaultConfig;

- (void).cxx_destruct;

@end
