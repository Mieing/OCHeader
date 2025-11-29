@class UIFont, NSArray, NSString, UIColor;

@interface AWEPOIDetailFeedUgcRateGradientExpandConfig : NSObject

@property (nonatomic) unsigned long long gradientStyle;
@property (copy, nonatomic) NSArray *gradientColors;
@property (copy, nonatomic) NSArray *gradientLocations;
@property (nonatomic) struct CGPoint { double x; double y; } gradientStartPoint;
@property (nonatomic) struct CGPoint { double x; double y; } gradientEndPoint;
@property (nonatomic) double gradientWidth;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textContainerInset;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } margin;
@property (nonatomic) double cornerRadius;

- (void).cxx_destruct;

@end
