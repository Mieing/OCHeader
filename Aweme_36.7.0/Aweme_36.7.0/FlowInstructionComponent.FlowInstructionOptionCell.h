@interface FlowInstructionComponent.FlowInstructionOptionCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ iconImageView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ checkView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lineView;
    void /* unknown type, empty encoding */ option;
}

@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL selected;

- (void).cxx_destruct;
- (BOOL)isSelected;
- (BOOL)isHighlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)traitCollectionDidChange:(id)a0;

@end
