@class NSCache, NSString;

@interface WCCommentImageStyleLoaderMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSCache *imageLoaderCache;
@property (retain, nonatomic) NSCache *imageStyleCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setImageLoader:(id)a0 forMediaId:(id)a1;
- (void)removeImageLoaderForMediaId:(id)a0;
- (id)getImageLoaderForMediaId:(id)a0;
- (void)setImageStyle:(id)a0 forMediaId:(id)a1;
- (void)removeImageStyleForMediaId:(id)a0;
- (id)getImageStyleforMediaId:(id)a0;
- (void)clearAllImageLoaderCache;
- (void)clearAllStyleLoaderCache;
- (void).cxx_destruct;

@end
