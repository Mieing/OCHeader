@interface BDPWebViewPageNetWorkDelegate : NSObject

+ (BOOL)isPageValid:(id)a0;
+ (void)enableInterceptor:(id)a0;
+ (void)installNetWorkDelegate:(id)a0;
+ (BOOL)interceptWebViewReuqest;

@end
