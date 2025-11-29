@interface HTSShareServiceUtils : NSObject

+ (id)topViewControllerForController:(id)a0;
+ (void)shortenURL:(id)a0 shareShortenBelong:(id)a1 completion:(id /* block */)a2;
+ (id)dataFromImage:(id)a0 withMaxSize:(struct CGSize { double x0; double x1; })a1 maxDataSize:(float)a2;
+ (id)stringByURLEncodingString:(id)a0;
+ (id)compressImageForWeiXin:(id)a0;
+ (id)cancelledErrorWithLocalizedDescription:(id)a0;
+ (id)unknownErrorWithLocalizedDescription:(id)a0;
+ (void)swizzleClass:(Class)a0 withSelector:(SEL)a1 usingBlock:(id /* block */)a2;
+ (id)cancelledError;
+ (id)topViewController;

@end
