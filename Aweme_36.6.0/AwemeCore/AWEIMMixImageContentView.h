@class UIImageView, AWEIMImageContentView, UILabel, UIView, UIButton;
@protocol IESIMMultiAvatarViewProtocol;

@interface AWEIMMixImageContentView : UIView

@property (retain, nonatomic) AWEIMImageContentView *imageContentView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView<IESIMMultiAvatarViewProtocol> *multiAvatar;
@property (retain, nonatomic) UIView *descContainerView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *descArrowIcon;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIView *darkMaskView;

- (void)updateDisplayImage:(id)a0;
- (void)configLoadingState:(long long)a0;
- (void)showEnsureDownloadView:(BOOL)a0 sizeText:(id)a1;
- (void)showProcessView:(BOOL)a0;
- (void)updateDownloadProcess:(double)a0;
- (void)updateDuoshanHideState:(BOOL)a0;
- (void)updateButtonAction:(id /* block */)a0;
- (void)updateButtonBackgroundColor:(id)a0;
- (void)updateButtonTitleColor:(id)a0;
- (void)updateCoverWithURL:(id)a0 defaultCover:(id)a1 bgColor:(id)a2 hidden:(BOOL)a3;
- (void)updateWithTitle:(id)a0 titleColor:(id)a1 desc:(id)a2 descColor:(id)a3 needDescArrow:(BOOL)a4 buttonTitle:(id)a5;
- (void)updateAvatarsWithURLs:(id)a0 avatarWidth:(double)a1 maxShowCount:(long long)a2 placeholder:(id)a3;
- (void)makeDarkMaskViewShow:(BOOL)a0;
- (void)updateStateImageName:(id)a0;
- (void)updateButtonHideState:(BOOL)a0;
- (id)p_multiAvatarOptionWithPlaceholder:(id)a0 moreAvatarCount:(long long)a1;
- (void)updateUIWithQuoteState:(BOOL)a0 avatarWidth:(double)a1 multiAvatarWidth:(double)a2;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
