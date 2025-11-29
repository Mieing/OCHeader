@class UILabel, UIImageView;

@interface FSPagerView.FSPagerViewCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ _textLabel;
    void /* unknown type, empty encoding */ _imageView;
    void /* unknown type, empty encoding */ kvoContext;
    void /* unknown type, empty encoding */ selectionColor;
    void /* unknown type, empty encoding */ _selectedForegroundView;
}

@property (nonatomic, readonly) UILabel *textLabel;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL selected;

- (void).cxx_destruct;
- (BOOL)isSelected;
- (BOOL)isHighlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)layoutSubviews;
- (void)dealloc;

@end
