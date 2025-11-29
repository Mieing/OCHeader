@class MMWebImageView, NSString, UIImageView, UIButton, NSDictionary, NSObject, MMUILabel, MMUIButton, MMImageView;
@protocol MMYuanBaoAdvertiseCellDelegate;

@interface MMYuanBaoAdvertiseCell : MMTableViewCell

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) MMUIButton *adButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *poparrowImageView;
@property (retain, nonatomic) NSDictionary *reportParams;
@property (retain, nonatomic) MMImageView *iconNamePostfix;
@property (weak, nonatomic) NSObject<MMYuanBaoAdvertiseCellDelegate> *delegate;
@property (retain, nonatomic) NSString *iconUrl;

+ (double)getCellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initUI;
- (void)updateStatus;
- (void)layoutSubviews;
- (void)adButtonTapped;
- (void)setCloseButtonHidden:(BOOL)a0;
- (void)closeButtonTapped;
- (void).cxx_destruct;

@end
