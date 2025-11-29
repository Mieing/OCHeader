@class UIImageView, MMUILabel, WCLivePhotoButtonModel;

@interface WCLivePhotoButton : MMUIButton

@property (retain, nonatomic) MMUILabel *liveTextLabel;
@property (retain, nonatomic) UIImageView *liveImageView;
@property (nonatomic) BOOL isShowBtn;
@property (retain, nonatomic) WCLivePhotoButtonModel *viewModel;

- (id)initWithModel:(id)a0;
- (double)_calculateHeight;
- (double)_calculateWidth;
- (void)initView:(BOOL)a0;
- (void)configShadowColor:(id)a0;
- (void)touchDown;
- (void)touchUP;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)_layoutSubviews;
- (void)scaleAnimation;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
