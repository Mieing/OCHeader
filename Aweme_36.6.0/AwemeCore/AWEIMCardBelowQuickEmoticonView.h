@class AWEIMCacheableImageView, UILabel, AWEIMCardBelowQuickEmoticonRenderModel;

@interface AWEIMCardBelowQuickEmoticonView : UIView

@property (retain, nonatomic) AWEIMCacheableImageView *imageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) AWEIMCardBelowQuickEmoticonRenderModel *renderModel;

- (void)renderWithModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
