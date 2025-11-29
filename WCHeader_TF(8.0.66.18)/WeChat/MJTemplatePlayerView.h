@class UIImageView, MJTemplateCompositeTask;

@interface MJTemplatePlayerView : UIView

@property (retain, nonatomic) MJTemplateCompositeTask *compositeTask;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (nonatomic) BOOL needsResumePlay;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 compositeTask:(id)a1;
- (void)playVideo;
- (void)stopVideo;
- (void)initView;
- (void)initBackgroundImageView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })suitableBackgroundImageViewFrame;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
