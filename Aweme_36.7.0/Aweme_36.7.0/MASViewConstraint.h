@class MASLayoutConstraint, MASViewAttribute, UIView;

@interface MASViewConstraint : MASConstraint <NSCopying>

@property (retain, nonatomic) MASViewAttribute *secondViewAttribute;
@property (weak, nonatomic) UIView *installedView;
@property (weak, nonatomic) MASLayoutConstraint *layoutConstraint;
@property (nonatomic) long long layoutRelation;
@property (nonatomic) float layoutPriority;
@property (nonatomic) double layoutMultiplier;
@property (nonatomic) double layoutConstant;
@property (nonatomic) BOOL hasLayoutRelation;
@property (retain, nonatomic) id mas_key;
@property (nonatomic) BOOL useAnimator;
@property (readonly, nonatomic) MASViewAttribute *firstViewAttribute;

+ (id)installedConstraintsForView:(id)a0;

- (id /* block */)multipliedBy;
- (id /* block */)dividedBy;
- (id /* block */)equalToWithRelation;
- (void)setSizeOffset:(struct CGSize { double x0; double x1; })a0;
- (id)addConstraintWithLayoutAttribute:(long long)a0;
- (id)initWithFirstViewAttribute:(id)a0;
- (BOOL)supportsActiveProperty;
- (BOOL)hasBeenInstalled;
- (id)layoutConstraintSimilarTo:(id)a0;
- (id)and;
- (void)uninstall;
- (id /* block */)key;
- (void).cxx_destruct;
- (void)setInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setOffset:(double)a0;
- (void)deactivate;
- (void)activate;
- (id /* block */)priority;
- (void)setCenterOffset:(struct CGPoint { double x0; double x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isActive;
- (void)install;
- (id)with;
- (void)setInset:(double)a0;

@end
