@class UIView, NSString, IESECGoodsDetailHeaderGaussBlurBGView, IESECHighlightButton, UIButton, IESECGoodsDetailPageContext, UILabel, IESECUIImageView;
@protocol IESECGoodsDetailContainerProtocol;

@interface IESECGoodsDetailPreviewView : UIView <IESECGoodsDetailContentProtocol, IESECGoodsDetailPreviewRetryProtocal>

@property (nonatomic) BOOL smallDeviceNHalfScreen;
@property (weak, nonatomic) id<IESECGoodsDetailContainerProtocol> container;
@property (nonatomic) long long mode;
@property (retain, nonatomic) UIView *bodyContainerView;
@property (retain, nonatomic) UIView *topContainerView;
@property (retain, nonatomic) UIView *searchBarContainerView;
@property (retain, nonatomic) IESECUIImageView *coverImgView;
@property (retain, nonatomic) IESECUIImageView *mainPreview;
@property (retain, nonatomic) IESECGoodsDetailHeaderGaussBlurBGView *statusBarBGView;
@property (retain, nonatomic) UIView *bottomPreview;
@property (retain, nonatomic) IESECHighlightButton *halfCloseButton;
@property (retain, nonatomic) UIView *closeBar;
@property (retain, nonatomic) UIView *fullCloseButton;
@property (weak, nonatomic) IESECGoodsDetailPageContext *context;
@property (nonatomic) BOOL shouldAdjustSearchBar;
@property (retain, nonatomic) IESECUIImageView *errorView;
@property (retain, nonatomic) UILabel *errorText;
@property (retain, nonatomic) UILabel *descriptionText;
@property (retain, nonatomic) UIButton *retryBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ retryClick;
@property (nonatomic) BOOL disableReconnect;
@property (nonatomic) BOOL isLoading;

- (void)updateDisplay;
- (void)embedInContainer:(id)a0;
- (void)initializeWithParameters:(id)a0;
- (BOOL)shouldAddStatusBarGaussBlur;
- (BOOL)supportMode:(long long)a0;
- (void)hidePreviewWithCompletion:(id /* block */)a0;
- (id)initWithMode:(long long)a0 adjustSearchBar:(BOOL)a1 mainPicScale:(id)a2 context:(id)a3;
- (void)updateWithCoverImg:(id)a0;
- (void)reShowPreview;
- (void)setIsLoading:(BOOL)a0 errorCode:(id)a1;
- (BOOL)needHidePreviewImage;
- (void)hideSeparatelyWithCompletion:(id /* block */)a0;
- (void)hideTogetherWithCompletion:(id /* block */)a0;
- (id)getErrorTextWithErrorCode:(id)a0;
- (void)closeButtonDidTap;
- (void)reloadPdpView;
- (void).cxx_destruct;
- (long long)initialMode;
- (void)layoutSubviews;

@end
