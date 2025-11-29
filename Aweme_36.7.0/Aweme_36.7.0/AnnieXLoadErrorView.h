@class UIViewController, BDXContext, UIImageView, NSString, UILabel, NSError, UIButton;
@protocol BDXContainerProtocol;

@interface AnnieXLoadErrorView : UIView <AnnieXErrorViewProtocol>

@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) long long style;
@property (nonatomic) long long errorType;
@property (retain, nonatomic) BDXContext *context;
@property (retain, nonatomic) NSError *error;
@property (weak, nonatomic) UIViewController<BDXContainerProtocol> *containerVC;
@property (copy, nonatomic) id /* block */ refreshBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerRefreshBlock:(id /* block */)a0;
- (void)container:(id)a0 didReceiveError:(id)a1;
- (id)initWithErrorType:(long long)a0 error:(id)a1 errorViewStyle:(long long)a2 context:(id)a3 containerVC:(id)a4;
- (void)p_reloadODR:(id)a0;
- (void)setupUIForPage;
- (void)setupUIForPopup:(long long)a0;
- (id)errorDescriptionText;
- (BOOL)isODRFailed:(long long)a0;
- (id)bgContainer5Color;
- (id)lineSecndaryColor;
- (id)themeUIStyle;
- (void)handleErrorViewClose:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupUI;
- (id)mainBackgroundColor;
- (id)textPrimaryColor;
- (void)retryButtonPressed:(id)a0;

@end
