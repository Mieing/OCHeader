@interface AWESearchPrefetchImageManager : NSObject

+ (void)prefetchImagesWithViewModels:(id)a0 trackParams:(id)a1 convertHandler:(id /* block */)a2;
+ (void)prefetchImagesWithURLModels:(id)a0 trackParams:(id)a1;
+ (id)prefetchStatusWithNetworkError:(id)a0 from:(long long)a1;

@end
