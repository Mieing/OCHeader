@interface BDXSeperateRenderImpl : NSObject

+ (id)createContextWithConfig:(id)a0 enableUIOperationQueue:(BOOL)a1;
+ (id)globalPropsWithConfig:(id)a0;
+ (void)reportMonitorWithConfig:(id)a0 duration:(double)a1 status:(id)a2;
+ (id)createContextWithConfig:(id)a0;
+ (id)preRenderWithConfig:(id)a0;
+ (void)preRenderWithConfig:(id)a0 completion:(id /* block */)a1;

@end
