@class UISwitch, UILabel, BDSCImageView, UIView;

@interface BDSCLocalCastOptionView : UIView

@property (retain, nonatomic) UIView *localCastView;
@property (retain, nonatomic) BDSCImageView *iconImageView;
@property (retain, nonatomic) UILabel *localCastTitleLabel;
@property (retain, nonatomic) UISwitch *localCastSwitch;
@property (nonatomic) BOOL on;
@property (nonatomic) BOOL isLandscape;

- (void)clickLabel:(id)a0;
- (void)localCastStatusChanged:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateStatus;

@end
