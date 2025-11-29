@class WCFinderHeadImageView, WCFinderTLRegardfulAuthorCellViewModel, UILabel, UIView;

@interface WCFinderTLRegardfulAuthorViewCell : MMUIButton

@property (weak, nonatomic) WCFinderHeadImageView *headImageView;
@property (weak, nonatomic) UILabel *nicknameLabel;
@property (weak, nonatomic) UIView *redDotView;
@property (retain, nonatomic) UIView *avatarViewCircle;
@property (retain, nonatomic) UILabel *avatarTextTipsLabel;
@property (retain, nonatomic) WCFinderTLRegardfulAuthorCellViewModel *viewModel;
@property (copy, nonatomic) id /* block */ exposeCallback;

+ (double)cellHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)clickActionReport;
- (unsigned long long)entranceRdStatus;
- (void)setUpUI;
- (void)updateWithViewModel:(id)a0;
- (void)updateRedDotViewAndLiveStatus;
- (void)dealloc;
- (void)layoutSubviews;
- (void)showLiveView:(BOOL)a0;
- (id)genAvatarCircleWithCircleSize:(struct CGSize { double x0; double x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
