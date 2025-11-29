@class UIImageView, AppUrlImageMessageViewModel, UIView;

@interface AppUrlImageMessageCellView : AppUrlMessageCellViewBase

@property (retain, nonatomic) UIImageView *mediaImageView;
@property (retain, nonatomic) UIView *titlePanel;
@property (retain, nonatomic) UIView *m_maskView;
@property (readonly, nonatomic) AppUrlImageMessageViewModel *viewModel;

- (void)layoutContentView;
- (void)initSubviews;
- (void)updateLayout;
- (void)initMediaImageView;
- (void)layoutMediaImageView;
- (id)buildGradientView;
- (id)buildExtInfoView;
- (id)buildExtInfoTextLabel:(id)a0 fontName:(id)a1;
- (id)buildCentralPlayBtn;
- (void)initTextPanel;
- (void)setHighlighted:(BOOL)a0;
- (void)initSourceViewInside;
- (id)imageWithHorizontalPadding:(double)a0 verticalPadding:(double)a1 image:(id)a2;
- (id)defaultMediaImage;
- (void).cxx_destruct;

@end
