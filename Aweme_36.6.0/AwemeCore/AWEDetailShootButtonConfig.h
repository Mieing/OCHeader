@class NSString, UIImage, UIColor;

@interface AWEDetailShootButtonConfig : NSObject

@property (copy, nonatomic) NSString *iconImageName;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } iconBound;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } imageEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } titleEdgeInsets;
@property (nonatomic) BOOL useWhiteStyle;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) UIColor *backgroundColor;

+ (id)duetConfig;
+ (id)defaultConfig;

- (void).cxx_destruct;

@end
