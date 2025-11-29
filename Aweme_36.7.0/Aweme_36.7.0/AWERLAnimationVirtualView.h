@class AWERLVirtualView;

@interface AWERLAnimationVirtualView : AWERLVirtualView

@property (nonatomic) unsigned long long transitionType;
@property (retain, nonatomic) AWERLVirtualView *virtualView;

- (void)debugBuildDescriptions:(id)a0;
- (id)mountWithContext:(id)a0;
- (void)debugBuildLayoutDescriptions:(id)a0;
- (id)transitionString;
- (void)debugHierarchyVirtualViewDescriptions;
- (void)debugHierarchyLayoutDescription;
- (void).cxx_destruct;
- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)debugDescription;

@end
