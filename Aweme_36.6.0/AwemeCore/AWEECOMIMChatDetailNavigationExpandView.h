@class DUXBaseLabel, DUXBaseImageView;

@interface AWEECOMIMChatDetailNavigationExpandView : UIView

@property (retain, nonatomic) DUXBaseLabel *textLabel;
@property (retain, nonatomic) DUXBaseImageView *arrow;
@property (nonatomic) long long status;
@property (nonatomic) BOOL isNewStyle;
@property (copy, nonatomic) id /* block */ clickBlock;

+ (struct CGSize { double x0; double x1; })expandViewSizeWithNewStyle:(BOOL)a0;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateUI;
- (void)handleTap;
- (void)updateWithStatus:(long long)a0;

@end
