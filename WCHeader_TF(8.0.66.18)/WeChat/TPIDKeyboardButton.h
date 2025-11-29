@class UILabel, UIImage;

@interface TPIDKeyboardButton : UIButton

@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImage *highlightedImage;

- (unsigned long long)accessibilityTraits;
- (void)setKeyboardBackgroundImage:(id)a0 forState:(unsigned long long)a1;
- (void)hiddenKeyboardPressedState:(BOOL)a0;
- (void)dealloc;

@end
