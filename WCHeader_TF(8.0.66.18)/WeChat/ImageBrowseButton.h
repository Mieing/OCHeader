@class UIView;

@interface ImageBrowseButton : MMUIButton {
    UIView *_roundBackView;
    UIView *_coverBackView;
    UIView *_selectedView;
}

@property (nonatomic) BOOL isRound;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)a0;
- (void)setSelected:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)updateBlur:(id)a0;
- (void)updateToHDR;
- (void).cxx_destruct;

@end
