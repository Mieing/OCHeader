@class NSDictionary, NSString, AWEIMNetworkPerformanceTracker, UIImage, PHAsset, AWEIMCustomGiphyBatchUploadHandler, AWEIMNextGenerationUploadFileController;

@interface AWEIMCustomGiphyUploadHandler : NSObject

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) PHAsset *asset;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) AWEIMNextGenerationUploadFileController *uploader;
@property (retain, nonatomic) AWEIMNetworkPerformanceTracker *totalTracker;
@property (retain, nonatomic) AWEIMCustomGiphyBatchUploadHandler *uploadHandler;
@property (copy, nonatomic) NSString *enterScene;
@property (copy, nonatomic) NSString *chatType;
@property (copy, nonatomic) NSString *toUserID;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSDictionary *bizTrackParams;
@property (copy, nonatomic) NSDictionary *convTrackParams;

- (void)p_uploadEmoticonStatus:(long long)a0;
- (void)p_uploadFavoriteEmojiNew:(BOOL)a0 withAddStatus:(id)a1 emojiID:(id)a2;
- (void)p_createStickerWithParams:(id)a0 isGif:(BOOL)a1 completion:(id /* block */)a2;
- (void)successAddCustomSticker;
- (struct CGSize { double x0; double x1; })p_getAssetSize;
- (void)uploadImage:(id)a0 preferredMD5:(id)a1 completion:(id /* block */)a2;
- (struct CGSize { double x0; double x1; })p_caculateEmojiSize;
- (void).cxx_destruct;

@end
