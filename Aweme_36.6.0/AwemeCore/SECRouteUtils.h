@interface SECRouteUtils : NSObject

+ (id)pageDescription:(id)a0;
+ (id)fetchTraceByPage:(id)a0;
+ (id)routerPathWithRouter:(id)a0;
+ (void)attachTrace:(id)a0 toPage:(id)a1;
+ (id)_fetchTraceByPage:(id)a0;
+ (void)_attachTrace:(id)a0 withPage:(id)a1;
+ (BOOL)isResponder:(id)a0 successorOfUIResponder:(id)a1;
+ (id)fetchStandardNativeTraceFromWebView:(id)a0;
+ (id)topViewControllerOfView:(id)a0;
+ (void)attachStandardNativeTrace:(id)a0 toWebView:(id)a1;

@end
