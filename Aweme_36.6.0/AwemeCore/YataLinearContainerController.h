@class NSArray;

@interface YataLinearContainerController : YataABSContainerController

@property (retain, nonatomic) NSArray *viewHolderSeqKey;

- (void)onViewHolderContainerChanged:(id)a0 viewHolderSeqKey:(id)a1 viewHolderDict:(id)a2 animationIntermediateSeqKey:(id)a3 animationChangingSeqKey:(id)a4 completion:(id /* block */)a5;
- (void)addOrRemoveDummyViewToContainerIfNeeded:(id)a0 axis:(long long)a1;
- (void)createRootViewWithViewHolder:(id)a0 containerView:(id)a1 fitSize:(struct CGSize { double x0; double x1; })a2 indexNumber:(id)a3 retryTimeDict:(id)a4;
- (void)updateContainer:(id)a0 afterCreateView:(id)a1 viewHolder:(id)a2 fitSize:(struct CGSize { double x0; double x1; })a3 index:(id)a4;
- (void)dispatchLinearAutoExposure:(id)a0 viewHolder:(id)a1;
- (void)changingAnimation:(id)a0 bindContent:(id /* block */)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
