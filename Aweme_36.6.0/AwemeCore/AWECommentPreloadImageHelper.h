@class NSString;

@interface AWECommentPreloadImageHelper : NSObject <AWECommentPreloadImageHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preloadImageWithModel:(id)a0 params:(id)a1 preloadImageCompletion:(id /* block */)a2;
+ (id)preloadImageWithDict:(id)a0 params:(id)a1 preloadImageCompletion:(id /* block */)a2;
+ (void)prefetchImageWithURL:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
+ (void)trackPreloadImageWithCommentID:(id)a0 params:(id)a1 preloadImageCompletion:(id /* block */)a2;
+ (void)trackPreloadImageWithCommentID:(id)a0 params:(id)a1;


@end
