@class AWEPOICommentUploadVideoTokenModel;

@interface AWEPOIUGCCreationVideoUploadUtil : NSObject

@property (retain, nonatomic) AWEPOICommentUploadVideoTokenModel *videoToken;

+ (id)videoHostName;

- (void)uploadVideoWithFileURL:(id)a0 materialID:(id)a1 bridgeContext:(id)a2 completion:(id /* block */)a3;
- (void)prefetchVideoToken;
- (void)uploadVideoByTokenWithFileURL:(id)a0 materialID:(id)a1 bridgeContext:(id)a2 completion:(id /* block */)a3;
- (void)compressVideo:(id)a0 materialID:(id)a1 bridgeContext:(id)a2 completion:(id /* block */)a3;
- (void)compressProgress:(double)a0 materialID:(id)a1 bridgeContext:(id)a2;
- (void).cxx_destruct;

@end
