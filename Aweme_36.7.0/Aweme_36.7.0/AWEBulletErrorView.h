@class NSString, UIImageView, UILabel, UIButton;

@interface AWEBulletErrorView : UIView <BDXLoadErrorViewProtocol>

@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) id /* block */ closeHandler;
@property (nonatomic) long long style;
@property (copy, nonatomic) id /* block */ refreshBlock;
@property (nonatomic) BOOL showBackButtonInPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerRefreshBlock:(id /* block */)a0;
- (void)container:(id)a0 didReceiveError:(id)a1;
- (void)setupUIForPage;
- (void)setupUIForPopup:(long long)a0;
- (void)handleErrorViewClose:(id)a0;
- (id)initWithErrorViewStyle:(long long)a0;
- (void)registerCloseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (void)retryButtonPressed:(id)a0;

@end
