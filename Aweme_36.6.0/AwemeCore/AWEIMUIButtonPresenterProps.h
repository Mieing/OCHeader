@class UIColor, NSString, UIFont, UIImage;

@interface AWEIMUIButtonPresenterProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIFont *titleFont;
@property (nonatomic) double selectedAlpha;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) long long buttonType;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) UIImage *normalStateBackgroundImage;
@property (retain, nonatomic) UIImage *highlightStateBackgroundImage;
@property (copy, nonatomic) id /* block */ tapBlock;

- (void).cxx_destruct;
- (id)init;

@end
