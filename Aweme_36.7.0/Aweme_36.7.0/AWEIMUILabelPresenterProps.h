@class UIFont, NSString, UIColor, NSAttributedString;

@interface AWEIMUILabelPresenterProps : AWEIMUIViewPresenterProps

@property (nonatomic) BOOL isUserSetTextAlignment;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) long long numberOfLines;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) struct CGSize { double width; double height; } fixedSize;

- (void).cxx_destruct;
- (id)init;

@end
