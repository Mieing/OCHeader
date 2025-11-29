@class NSString, NSMutableArray;

@interface MASCompositeConstraint : MASConstraint <MASConstraintDelegate>

@property (retain, nonatomic) id mas_key;
@property (retain, nonatomic) NSMutableArray *childConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)constraint:(id)a0 addConstraintWithLayoutAttribute:(long long)a1;
- (id /* block */)multipliedBy;
- (id /* block */)dividedBy;
- (id /* block */)equalToWithRelation;
- (void)setSizeOffset:(struct CGSize { double x0; double x1; })a0;
- (void)constraint:(id)a0 shouldBeReplacedWithConstraint:(id)a1;
- (id)addConstraintWithLayoutAttribute:(long long)a0;
- (void)uninstall;
- (id /* block */)key;
- (void).cxx_destruct;
- (void)setInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setOffset:(double)a0;
- (void)deactivate;
- (void)activate;
- (id /* block */)priority;
- (void)setCenterOffset:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithChildren:(id)a0;
- (void)install;
- (void)setInset:(double)a0;

@end
