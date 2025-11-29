@class UIColor, UIView;

@interface DUXPopoverVisualEffectContentView : UIVisualEffectView

@property (nonatomic) double duxPopoverCornerRadius;
@property (nonatomic) unsigned long long position;
@property (nonatomic) double sharpOffset;
@property (retain, nonatomic) UIColor *popoverColor;
@property (retain, nonatomic) UIView *backgroundView;

- (void).cxx_destruct;
- (id)initWithEffect:(id)a0;
- (void)layoutSubviews;

@end
