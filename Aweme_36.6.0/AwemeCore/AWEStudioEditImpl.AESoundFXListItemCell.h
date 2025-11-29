@interface AWEStudioEditImpl.AESoundFXListItemCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ itemModel;
    void /* unknown type, empty encoding */ tokens;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ durationLabel;
    void /* unknown type, empty encoding */ loadingImageView;
    void /* unknown type, empty encoding */ icon;
    void /* unknown type, empty encoding */ applyButton;
    void /* unknown type, empty encoding */ playingView;
    void /* unknown type, empty encoding */ titleContainerView;
    void /* unknown type, empty encoding */ accessibilityView;
    void /* unknown type, empty encoding */ applyButtonTapAction;
}

@property (nonatomic) BOOL highlighted;

- (void)applyButtonTappedWithButton:(id)a0;
- (void).cxx_destruct;
- (BOOL)isHighlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
