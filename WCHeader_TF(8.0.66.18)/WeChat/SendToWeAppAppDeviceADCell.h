@class NSString, UIImageView, UIButton, NSDictionary, NSObject, MMUILabel, MagicAdInfo, MMUIButton;
@protocol SendToWeAppAppDeviceADCellDelegate;

@interface SendToWeAppAppDeviceADCell : MMTableViewCell

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) MMUIButton *adButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *poparrowImageView;
@property (retain, nonatomic) NSDictionary *reportParams;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) MagicAdInfo *adInfo;
@property (weak, nonatomic) NSObject<SendToWeAppAppDeviceADCellDelegate> *delegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initUI;
- (void)layoutSubviews;
- (void)adButtonTapped;
- (void)setCloseButtonHidden:(BOOL)a0;
- (void)closeButtonTapped;
- (void).cxx_destruct;

@end
