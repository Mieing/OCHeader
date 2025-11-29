@interface AWEStudioPublishLocalCacheServiceImpl : NSObject <AWEStudioPublishLocalCacheService>

- (id)localClipStorageURLWithAwemeId:(id)a0 awemeModel:(id)a1 imageModel:(id)a2 uri:(id)a3 createTime:(id)a4 isVideo:(BOOL)a5 scene:(id)a6 error:(id *)a7;
- (void)loadImagesCacheIfNeededWithAweme:(id)a0 expectImageCache:(BOOL)a1;
- (id)localVideoStorageURLWithAwemeID:(id)a0 awemeModel:(id)a1 videoURI:(id)a2 createTime:(id)a3 scene:(id)a4 error:(id *)a5;
- (id)localVideoStorageURLWithAwemeID:(id)a0 awemeModel:(id)a1 videoURI:(id)a2 createTime:(id)a3 creatorUid:(id)a4 scene:(id)a5 error:(id *)a6;

@end
