@class UIImageView;

@interface AWEVideoCoverTextTemplateClearCell : AWETextTemplateStickerCell

@property (retain, nonatomic) UIImageView *clearIcon;

- (void)p_setupView;
- (void)setStickerSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)tapAnimation;
- (BOOL)useWholeContentSize;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSticker:(id)a0;

@end
