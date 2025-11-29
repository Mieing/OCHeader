@class NSString, IGListSectionController;

@interface AWEFlowSetionLayout : NSObject <AWESectionLayoutProtocol>

@property (weak, nonatomic) IGListSectionController *sectionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct AWESectionLayoutEntity { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct vector<CGRect, std::allocator<CGRect>> { struct CGRect *x0; struct CGRect *x1; struct CGRect *x2; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; })calculateWithSection:(long long)a0 collectionView:(id)a1 lastLayout:(id)a2 lastSctionLayoutEntity:(struct AWESectionLayoutEntity { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct vector<CGRect, std::allocator<CGRect>> { struct CGRect *x0; struct CGRect *x1; struct CGRect *x2; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; })a3;
- (void).cxx_destruct;

@end
