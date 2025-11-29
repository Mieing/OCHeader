@class UIImageView, UILabel, UIView;

@interface WCFinderAccountSelectedButton : MMUIButton

@property (weak, nonatomic) UIImageView *leftImageView;
@property (weak, nonatomic) UILabel *selectedLabel;
@property (weak, nonatomic) UIView *redDotView;
@property (readonly, nonatomic) BOOL hasShowRedDot;

- (id)init;
- (void)setUpUI;
- (void)showRedDotView:(BOOL)a0;
- (void)reloadLayout;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
