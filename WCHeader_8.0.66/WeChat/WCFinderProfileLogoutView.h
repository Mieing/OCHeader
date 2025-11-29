@class UIImageView, UILabel, UIButton;
@protocol WCFinderProfileLogoutViewDelegate;

@interface WCFinderProfileLogoutView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *IKnowButton;
@property (weak, nonatomic) id<WCFinderProfileLogoutViewDelegate> delegate;
@property (nonatomic) BOOL isLogoutDone;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)onCloseIKnowButton;
- (void).cxx_destruct;

@end
