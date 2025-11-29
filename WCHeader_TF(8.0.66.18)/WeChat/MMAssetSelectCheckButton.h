@class UIColor, UIImageView, UIImage, UILabel, UIView;

@interface MMAssetSelectCheckButton : MMUIButton {
    long long m_selectedIndex;
    UILabel *m_selectedIndexView;
    UIImageView *m_singleSelectedIndexView;
    UIImage *m_normalImage;
    UIImage *m_selectedImage;
    UIColor *m_backgroundColor;
}

@property (retain, nonatomic) UIView *notSelectedView;
@property (retain, nonatomic) UIView *selectionBlurView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } selectedIndexViewFrame;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundColor:(id)a1;
- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (id)imageForState:(unsigned long long)a0;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (BOOL)isSelected;
- (void)setSelected:(BOOL)a0;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setHidden:(BOOL)a0;
- (id)selectedIndexText;
- (void)setSelectedIndex:(long long)a0 animated:(BOOL)a1;
- (void)setSingleSelectedIndex:(long long)a0 animated:(BOOL)a1;
- (void)setSingleSelectedIndex:(long long)a0 animated:(BOOL)a1 animationDuration:(double)a2;
- (id)selectedView;
- (id)singleSelectedView;
- (void)startPopUpAnimation:(id)a0 originScale:(double)a1;
- (void)startPopUpAnimation:(id)a0 originScale:(double)a1 animationDuration:(double)a2;
- (void)setSelectedIndexViewHidden:(BOOL)a0;
- (void).cxx_destruct;

@end
