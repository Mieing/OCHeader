@class WXMASLayoutConstraint, WXMASViewAttribute, UIView;

@interface WXMASViewConstraint : WXMASConstraint <NSCopying>

@property (retain, nonatomic) WXMASViewAttribute *secondViewAttribute;
@property (weak, nonatomic) UIView *installedView;
@property (weak, nonatomic) WXMASLayoutConstraint *layoutConstraint;
@property (nonatomic) long long layoutRelation;
@property (nonatomic) float layoutPriority;
@property (nonatomic) double layoutMultiplier;
@property (nonatomic) double layoutConstant;
@property (nonatomic) BOOL hasLayoutRelation;
@property (retain, nonatomic) id mas_key;
@property (nonatomic) BOOL useAnimator;
@property (readonly, nonatomic) WXMASViewAttribute *firstViewAttribute;

+ (id)installedConstraintsForView:(id)a0;

- (id)initWithFirstViewAttribute:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)supportsActiveProperty;
- (BOOL)isActive;
- (BOOL)hasBeenInstalled;
- (id /* block */)multipliedBy;
- (id /* block */)dividedBy;
- (id /* block */)priority;
- (id /* block */)equalToWithRelation;
- (id)with;
- (id)and;
- (id)addConstraintWithLayoutAttribute:(long long)a0;
- (id /* block */)key;
- (void)setInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setInset:(double)a0;
- (void)setOffset:(double)a0;
- (void)setSizeOffset:(struct CGSize { double x0; double x1; })a0;
- (void)setCenterOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)activate;
- (void)deactivate;
- (void)install;
- (id)layoutConstraintSimilarTo:(id)a0;
- (void)uninstall;
- (void).cxx_destruct;

@end
