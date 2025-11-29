@class UIImageView, MultiTalkHDHeadView;

@interface VoIPHeadImageBlurView : UIView {
    int _scene;
}

@property (retain, nonatomic) UIImageView *blurView;
@property (retain, nonatomic) MultiTalkHDHeadView *headImageView;
@property (nonatomic) BOOL shouldIgnoreHeadViewCenterYCompatibilityInSmall;

- (id)init;
- (void)initView;
- (void)layoutSubviews;
- (void)layoutBlurView;
- (void)layoutHeadView;
- (void)updateScene:(int)a0;
- (void)updateViewInfo:(id)a0 scene:(int)a1;
- (void)layoutBackground;
- (void).cxx_destruct;

@end
