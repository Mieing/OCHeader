@class BDWebImageRequest;
@protocol IESForestFetcherProtocol, IESForestResponseProtocol;

@interface IESForestImageFetcher : IESForestBaseFetcher

@property (retain, nonatomic) id<IESForestFetcherProtocol> fetcher;
@property (retain, nonatomic) BDWebImageRequest *imageRequest;
@property (retain, nonatomic) id<IESForestResponseProtocol> response;

+ (id)fetcherName;
+ (id)p_imageRequestKey:(id)a0;
+ (void)p_preloadAllFrames:(id)a0 completion:(id /* block */)a1;
+ (void)cacheImage:(id)a0 dataResourceType:(long long)a1 request:(id)a2;
+ (void)imageWithRequest:(id)a0 completion:(id /* block */)a1;

- (void)fetchResourceWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)fetchImageWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)p_imageWithData:(id)a0 downsampleSize:(struct CGSize { double x0; double x1; })a1 preloadAllFrames:(BOOL)a2 completion:(id /* block */)a3;
- (id)p_imageWithData:(id)a0 downsampleSize:(struct CGSize { double x0; double x1; })a1 preloadAllFrames:(BOOL)a2;
- (id)initWithFetcher:(id)a0;
- (void).cxx_destruct;
- (id)name;
- (void)cancelFetch;

@end
