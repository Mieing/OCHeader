@class UIColor, UIFont, NSArray, NSString, UIImage;

@interface ACCGrootStickerViewViewModel : NSObject

@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) UIFont *textFont;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textViewPadding;
@property (readonly, nonatomic) NSArray *textGradientColors;
@property (readonly, nonatomic) long long gradientdiRect;
@property (readonly, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) UIFont *iconFont;
@property (readonly, copy, nonatomic) NSString *iconFontGlyph;
@property (readonly, nonatomic) double iconViewLeftInset;
@property (readonly, nonatomic) UIImage *hashtagIconFontImage;
@property (readonly, copy, nonatomic) NSString *iconUrl;
@property (readonly, nonatomic) double contentHorizontalMinMargin;
@property (readonly, nonatomic) double contentHeight;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) double hashtagContentHeight;
@property (readonly, nonatomic) double borderHeight;
@property (readonly, nonatomic) double viewHeight;
@property (readonly, nonatomic) double textMaxWidth;
@property (readonly, nonatomic) double hashtagViewHeight;
@property (readonly, nonatomic) UIColor *grootTintColor;
@property (readonly, nonatomic) UIFont *grootTextFont;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } grootTextViewPadding;
@property (readonly, nonatomic) double grootIconViewLeftInset;
@property (readonly, nonatomic) double grootTextMaxWidth;

- (id)initWitheffectModelInfo:(id)a0;
- (void)p_setupIconFont;
- (void).cxx_destruct;

@end
