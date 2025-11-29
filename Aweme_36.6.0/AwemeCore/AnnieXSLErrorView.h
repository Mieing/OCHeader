@class NSString, UIImageView, UILabel, UIButton;

@interface AnnieXSLErrorView : UIView <AnnieXErrorViewProtocol>

@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIButton *retryButton;
@property (copy, nonatomic) id /* block */ refreshBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerRefreshBlock:(id /* block */)a0;
- (void)setupUIForPage;
- (id)errorDescriptionText;
- (id)themeUIStyle;
- (id)bgContainerColor;
- (id)lineSecondaryColor;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupUI;
- (id)mainBackgroundColor;
- (id)textPrimaryColor;
- (void)retryButtonPressed:(id)a0;

@end
