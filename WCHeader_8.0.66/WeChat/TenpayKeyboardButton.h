@class UILabel;

@interface TenpayKeyboardButton : UIButton

@property (retain, nonatomic) UILabel *subtitleLabel;

- (unsigned long long)accessibilityTraits;
- (void)dealloc;

@end
