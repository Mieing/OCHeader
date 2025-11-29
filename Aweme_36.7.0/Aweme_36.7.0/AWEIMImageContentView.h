@class UIView, AWEIMMessageStateView, UITapGestureRecognizer, UIImageView, BDImageView, AWEIMSocialEffectCoplayView, AWEIMUploadProgressView, UILabel;

@interface AWEIMImageContentView : UIView

@property (retain, nonatomic) UIView *ensureDownloadView;
@property (retain, nonatomic) UIImageView *ensureDownloadIconImageView;
@property (retain, nonatomic) UILabel *fileSizeLabel;
@property (retain, nonatomic) AWEIMMessageStateView *loadingView;
@property (retain, nonatomic) BDImageView *displayImageView;
@property (retain, nonatomic) UIView *displayMaskView;
@property (retain, nonatomic) AWEIMUploadProgressView *progressView;
@property (retain, nonatomic) UIImageView *livePhotoIconImageView;
@property (retain, nonatomic) UITapGestureRecognizer *coverTapGesture;
@property (retain, nonatomic) AWEIMSocialEffectCoplayView *coplayContainer;
@property (copy, nonatomic) id /* block */ ensureBeginDownloadAction;
@property (copy, nonatomic) id /* block */ coverDidTappedAction;
@property (copy, nonatomic) id /* block */ coplayTapAction;
@property (copy, nonatomic) id /* block */ didSetImageBlock;

- (void)p_coplayDidTaped;
- (void)p_setupSubview;
- (void)setLivePhotoTagHidden:(BOOL)a0;
- (void)updateDisplayImage:(id)a0;
- (void)configLoadingState:(long long)a0;
- (void)showEnsureDownloadView:(BOOL)a0 sizeText:(id)a1;
- (void)showProcessView:(BOOL)a0;
- (void)updateDownloadProcess:(double)a0;
- (void)setCoplayViewHidden:(BOOL)a0 atPosition:(unsigned long long)a1 bottomOffset:(double)a2;
- (void)setEnableDisplayCoplayJoinBtn:(BOOL)a0;
- (void)setCoplyViewScaleRadius:(double)a0;
- (void)p_createEnsureDownloadViewIfNeeded;
- (void)displayImageViewTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
