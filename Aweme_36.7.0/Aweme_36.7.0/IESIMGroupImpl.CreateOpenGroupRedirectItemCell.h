@interface IESIMGroupImpl.CreateOpenGroupRedirectItemCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ contentVerticalStackView;
    void /* unknown type, empty encoding */ titleHorizontalContentView;
    void /* unknown type, empty encoding */ titleHorizontalStackView;
    void /* unknown type, empty encoding */ headTitleLabel;
    void /* unknown type, empty encoding */ headTitleNextView;
    void /* unknown type, empty encoding */ tailTitleLabel;
    void /* unknown type, empty encoding */ arrowView;
    void /* unknown type, empty encoding */ infoHorizontalStackView;
    void /* unknown type, empty encoding */ infoLabel;
    void /* unknown type, empty encoding */ infoImageView;
    void /* function */ didClickTitleHorizontalStackViewBlock;
}

@property (nonatomic, copy) id /* block */ didClickTitleHorizontalStackViewBlock;

- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)didClickTitleHorizontalStackView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
