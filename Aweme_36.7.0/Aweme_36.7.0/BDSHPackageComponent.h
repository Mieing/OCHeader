@class NSMutableArray;

@interface BDSHPackageComponent : BDSHViewComponent

@property (retain, nonatomic) NSMutableArray *children;

- (void)updateChildren;
- (void)updateWithRenderNode:(void *)a0 engine:(id)a1;
- (void)updatePackageChildren;
- (void)onMounted;
- (void).cxx_destruct;

@end
