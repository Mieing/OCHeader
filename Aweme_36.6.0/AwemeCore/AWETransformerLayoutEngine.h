@interface AWETransformerLayoutEngine : NSObject

+ (void)calculateLayoutWithStrategy:(id)a0 container:(id)a1 completion:(id /* block */)a2;
+ (double)calculateAdaptiveContainerWidthByStrategy:(id)a0;
+ (double)calculateAdaptiveContainerHeightByStrategy:(id)a0;

@end
