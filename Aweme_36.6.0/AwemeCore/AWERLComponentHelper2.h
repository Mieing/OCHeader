@interface AWERLComponentHelper2 : NSObject

+ (void)visitAllComponents:(id)a0 visitor:(id /* block */)a1;
+ (void)buildComponent:(id)a0 delegate:(id)a1 params:(id)a2;
+ (id)buildVirtualView:(id)a0 useDiffAlgorithm:(BOOL)a1;
+ (void)calculateLayout:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (void)mount:(id)a0 container:(id)a1 animation:(id)a2;
+ (id)containerView:(id)a0;
+ (void)__verifyNeedsBuildVirtualView:(id)a0 useDiffAlgorithm:(BOOL)a1;
+ (id)__buildVirtualViewRecursively:(id)a0;
+ (void)__markVirtualViewNewAdded:(id)a0 exception:(id)a1;
+ (void)__verifyCacheValidation:(id)a0;
+ (void)unmountFromView:(id)a0;

@end
