@interface AWEStudioAwemeResourceDownloader : NSObject

+ (void)fetchMultiResourcesFromConfig:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
+ (void)getImageAlbumResourcesFromAweme:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
+ (void)getNormalResourcesFromAweme:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
+ (void)getResourcesFromAweme:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
+ (void)fetchCoversWithAweme:(id)a0 completion:(id /* block */)a1;

@end
