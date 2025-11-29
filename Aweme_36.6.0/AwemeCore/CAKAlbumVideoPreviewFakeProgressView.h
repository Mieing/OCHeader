@class UIVisualEffectView, CAKAlbumVideoPreviewFakeProgressViewConfig, UIView;

@interface CAKAlbumVideoPreviewFakeProgressView : UIView

@property (nonatomic) BOOL isAdaptForSecondaryPage;
@property (retain, nonatomic) CAKAlbumVideoPreviewFakeProgressViewConfig *normalConfig;
@property (retain, nonatomic) CAKAlbumVideoPreviewFakeProgressViewConfig *highlightConfig;
@property (nonatomic) double percentage;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *thumbView;
@property (retain, nonatomic) UIView *whiteView;
@property (retain, nonatomic) UIView *grayView;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (nonatomic) BOOL isDisappearAnimating;

- (id)initWithNormalConfig:(id)a0 highlightConfig:(id)a1;
- (double)grayViewHeightForShowState;
- (double)grayViewRadiusForShowState;
- (id)grayBGColor;
- (void)adaptForSecondaryPage;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupUI;
- (void)show:(BOOL)a0 completion:(id /* block */)a1;

@end
