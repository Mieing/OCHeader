@protocol MASConstraintDelegate;

@interface MASConstraint : NSObject

@property (nonatomic) BOOL updateExisting;
@property (weak, nonatomic) id<MASConstraintDelegate> delegate;

- (id /* block */)equalTo;
- (id /* block */)lessThanOrEqualTo;
- (id /* block */)multipliedBy;
- (id /* block */)dividedBy;
- (id /* block */)equalToWithRelation;
- (void)setSizeOffset:(struct CGSize { double x0; double x1; })a0;
- (id)addConstraintWithLayoutAttribute:(long long)a0;
- (id /* block */)mas_equalTo;
- (id /* block */)greaterThanOrEqualTo;
- (id /* block */)mas_greaterThanOrEqualTo;
- (id /* block */)mas_lessThanOrEqualTo;
- (id /* block */)priorityLow;
- (id /* block */)priorityMedium;
- (id /* block */)priorityHigh;
- (id /* block */)sizeOffset;
- (id /* block */)mas_offset;
- (id)firstBaseline;
- (id)centerXWithinMargins;
- (id)centerYWithinMargins;
- (void)setLayoutConstantWithValue:(id)a0;
- (id)and;
- (id /* block */)priority900;
- (id)left;
- (id /* block */)insets;
- (void)uninstall;
- (id)leadingMargin;
- (id /* block */)key;
- (void).cxx_destruct;
- (id)baseline;
- (void)setInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id /* block */)offset;
- (void)setOffset:(double)a0;
- (void)deactivate;
- (id)bottom;
- (id)init;
- (id)bottomMargin;
- (void)activate;
- (id /* block */)priority;
- (void)setCenterOffset:(struct CGPoint { double x0; double x1; })a0;
- (id)trailing;
- (id)leftMargin;
- (id)height;
- (id)width;
- (id)leading;
- (id)trailingMargin;
- (id)rightMargin;
- (id)top;
- (id /* block */)centerOffset;
- (id)lastBaseline;
- (id)topMargin;
- (id)right;
- (void)install;
- (id)centerX;
- (id)centerY;
- (id)with;
- (id /* block */)inset;
- (void)setInset:(double)a0;
- (id /* block */)valueOffset;

@end
