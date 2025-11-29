@class UIImageView, UIVisualEffectView, UILabel, UIView;

@interface AWEPreviewVideoMaskView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *tipImageView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UILabel *subTipLabel;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIImageView *coverImageView;

- (void)setContainerViewHidden:(BOOL)a0;
- (void)addEffectiveView;
- (void)removeEffectView;
- (void)setSubTipContent:(id)a0;
- (void)setTipImage:(id)a0;
- (void)showCoverImageWithURLArray:(id)a0;
- (void)hiddenCoverImage;
- (void)setContainerCenterY:(double)a0;
- (void)updateCoverImageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTipImageWithURLArray:(id)a0;
- (void)setTipImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)showCoverImageWithImage:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;
- (id)init;
- (void)setTipContent:(id)a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)setTopMargin:(double)a0;

@end
