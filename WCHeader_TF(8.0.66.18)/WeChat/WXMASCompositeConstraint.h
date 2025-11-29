@class NSString, NSMutableArray;

@interface WXMASCompositeConstraint : WXMASConstraint <WXMASConstraintDelegate>

@property (retain, nonatomic) id mas_key;
@property (retain, nonatomic) NSMutableArray *childConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithChildren:(id)a0;
- (void)constraint:(id)a0 shouldBeReplacedWithConstraint:(id)a1;
- (id)constraint:(id)a0 addConstraintWithLayoutAttribute:(long long)a1;
- (id /* block */)multipliedBy;
- (id /* block */)dividedBy;
- (id /* block */)priority;
- (id /* block */)equalToWithRelation;
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
- (void)uninstall;
- (void).cxx_destruct;

@end
