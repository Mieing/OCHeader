@interface AWEPOICommentUploadTokenHelper : NSObject

+ (void)getCommentUploadVideoToken:(id /* block */)a0;
+ (BOOL)isTokenValidWithExpiredTime:(id)a0;
+ (void)getVideoMetaWithVid:(id)a0 completion:(id /* block */)a1;

@end
