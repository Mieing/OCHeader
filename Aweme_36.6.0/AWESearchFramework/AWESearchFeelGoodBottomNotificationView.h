@class UIImageView, UILabel, UIView;

@interface AWESearchFeelGoodBottomNotificationView : AWESearchFeelGoodElementView {
    BOOL _isOnlySupportLightMode;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *redirectImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (copy, nonatomic) id /* block */ showCompletion;

- (void)configureUI;
- (BOOL)isOnlySupportLightMode;
- (void)setIsOnlySupportLightMode:(BOOL)a0;
- (BOOL)p_isDarkTheme;
- (void)p_dismissEntranceWithAnimation:(BOOL)a0;
- (void)p_showEntrnceView;
- (void)dismissEntrance;
- (void)showEntrnceViewWithModel:(id)a0 completion:(id /* block */)a1;
- (void)dismissPopups;
- (void)feedbackViewTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateUI;

@end
