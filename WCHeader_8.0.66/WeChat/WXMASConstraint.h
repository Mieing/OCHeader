@protocol WXMASConstraintDelegate;

@interface WXMASConstraint : NSObject

@property (nonatomic) BOOL updateExisting;
@property (weak, nonatomic) id<WXMASConstraintDelegate> delegate;

- (id)init;
- (id /* block */)equalTo;
- (id /* block */)mas_equalTo;
- (id /* block */)greaterThanOrEqualTo;
- (id /* block */)mas_greaterThanOrEqualTo;
- (id /* block */)lessThanOrEqualTo;
- (id /* block */)mas_lessThanOrEqualTo;
- (id /* block */)priorityLow;
- (id /* block */)priorityMedium;
- (id /* block */)priorityHigh;
- (id /* block */)insets;
- (id /* block */)inset;
- (id /* block */)sizeOffset;
- (id /* block */)centerOffset;
- (id /* block */)offset;
- (id /* block */)valueOffset;
- (id /* block */)mas_offset;
- (void)setLayoutConstantWithValue:(id)a0;
- (id)with;
- (id)and;
- (id)addConstraintWithLayoutAttribute:(long long)a0;
- (id)left;
- (id)top;
- (id)right;
- (id)bottom;
- (id)leading;
- (id)trailing;
- (id)width;
- (id)height;
- (id)centerX;
- (id)centerY;
- (id)baseline;
- (id)firstBaseline;
- (id)lastBaseline;
- (id)leftMargin;
- (id)rightMargin;
- (id)topMargin;
- (id)bottomMargin;
- (id)leadingMargin;
- (id)trailingMargin;
- (id)centerXWithinMargins;
- (id)centerYWithinMargins;
- (id /* block */)multipliedBy;
- (id /* block */)dividedBy;
- (id /* block */)priority;
- (id /* block */)equalToWithRelation;
- (id /* block */)key;
- (void)setInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setInset:(double)a0;
- (void)setSizeOffset:(struct CGSize { double x0; double x1; })a0;
- (void)setCenterOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setOffset:(double)a0;
- (void)activate;
- (void)deactivate;
- (void)install;
- (void)uninstall;
- (void).cxx_destruct;

@end
