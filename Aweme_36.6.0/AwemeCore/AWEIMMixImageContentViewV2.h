@class UIImageView, UIView;
@protocol IESIMGradientViewProtocol;

@interface AWEIMMixImageContentViewV2 : AWEIMMixImageContentView

@property (copy, nonatomic) id /* block */ buttonAction;
@property (retain, nonatomic) UIImageView *duoshanView;
@property (retain, nonatomic) UIImageView *contentStateMaskView;
@property (retain, nonatomic) UIView<IESIMGradientViewProtocol> *gradientView;

- (void)handleThemeChangeNotification;
- (void)onButtonTap;
- (void)updateDisplayImage:(id)a0;
- (void)configLoadingState:(long long)a0;
- (void)showEnsureDownloadView:(BOOL)a0 sizeText:(id)a1;
- (void)showProcessView:(BOOL)a0;
- (void)updateDownloadProcess:(double)a0;
- (void)p_updateCardBackground;
- (void)updateDuoshanHideState:(BOOL)a0;
- (void)updateButtonAction:(id /* block */)a0;
- (void)updateCoverWithURL:(id)a0 defaultCover:(id)a1 bgColor:(id)a2 hidden:(BOOL)a3;
- (void)updateWithTitle:(id)a0 titleColor:(id)a1 desc:(id)a2 descColor:(id)a3 needDescArrow:(BOOL)a4 buttonTitle:(id)a5;
- (void)updateAvatarsWithURLs:(id)a0 avatarWidth:(double)a1 maxShowCount:(long long)a2 placeholder:(id)a3;
- (void)makeDarkMaskViewShow:(BOOL)a0;
- (void)updateStateImageName:(id)a0;
- (id)p_multiAvatarOptionWithPlaceholder:(id)a0 moreAvatarCount:(long long)a1;
- (void)updateUIWithQuoteState:(BOOL)a0 avatarWidth:(double)a1 multiAvatarWidth:(double)a2;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
