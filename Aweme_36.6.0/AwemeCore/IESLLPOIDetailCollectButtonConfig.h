@class UIFont, NSString, UIColor, UIImage;

@interface IESLLPOIDetailCollectButtonConfig : NSObject

@property (retain, nonatomic) NSString *collectText;
@property (retain, nonatomic) NSString *uncollectText;
@property (retain, nonatomic) UIFont *textFont;
@property (nonatomic) double textImagePadding;
@property (retain, nonatomic) UIColor *collectBackgroundColor;
@property (retain, nonatomic) UIColor *uncollectBackgroundColor;
@property (retain, nonatomic) UIColor *collectTextColor;
@property (retain, nonatomic) UIColor *uncollectTextColor;
@property (retain, nonatomic) UIImage *collectImage;
@property (retain, nonatomic) UIImage *uncollectImage;
@property (retain, nonatomic) UIColor *collectImageTintColor;
@property (retain, nonatomic) UIColor *uncollectImageTintColor;
@property (retain, nonatomic) UIColor *collectBorderColor;
@property (retain, nonatomic) UIColor *uncollectBorderColor;
@property (nonatomic) double collectBorderWidth;
@property (nonatomic) double uncollectBorderWidth;
@property (nonatomic) double horizontalPadding;
@property (nonatomic) double cornerRadius;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;

+ (id)configWithStyle:(unsigned long long)a0 theme:(id)a1;
+ (id)contentTextOfStyle:(unsigned long long)a0 isCollected:(BOOL)a1;
+ (id)textFontOfStyle:(unsigned long long)a0;
+ (id)backgroundColorOfStyle:(unsigned long long)a0 isCollected:(BOOL)a1 theme:(id)a2;
+ (id)textColorOfStyle:(unsigned long long)a0 isCollected:(BOOL)a1 theme:(id)a2;
+ (id)imageOfStyle:(unsigned long long)a0 isCollected:(BOOL)a1;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetsOfStyle:(unsigned long long)a0;
+ (id)borderColorOfStyle:(unsigned long long)a0 theme:(id)a1;
+ (double)borderWidthOfStyle:(unsigned long long)a0 isCollected:(BOOL)a1 theme:(id)a2;
+ (id)colorNamed:(id)a0 theme:(id)a1;
+ (struct CGSize { double x0; double x1; })intrinsicContentSizeOfStyle:(unsigned long long)a0 isCollected:(BOOL)a1 content:(id)a2;
+ (struct CGSize { double x0; double x1; })intrinsicContentSizeOfStyle:(unsigned long long)a0 isCollected:(BOOL)a1;
+ (double)borderWidthOfStyle:(unsigned long long)a0 isCollected:(BOOL)a1;

- (void).cxx_destruct;

@end
