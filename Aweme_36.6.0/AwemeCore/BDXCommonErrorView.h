@class BDXErrorViewConfig, UIImageView, NSString, UILabel, UIButton;

@interface BDXCommonErrorView : UIView <BDXErrorViewProtocol>

@property (retain, nonatomic) BDXErrorViewConfig *config;
@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithConfig:(id)a0;
- (void)setupView;
- (void)removeErrorView;
- (void)onRetry:(id)a0;

@end
