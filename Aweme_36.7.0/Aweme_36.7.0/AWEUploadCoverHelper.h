@class AWEUploadCoverResourceModel, AWEVideoPublishViewModel;

@interface AWEUploadCoverHelper : NSObject

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) AWEUploadCoverResourceModel *resourceModel;
@property (nonatomic) BOOL ignoreNewVideoCoverEdit;
@property (nonatomic) BOOL isSingleImageAsImageAlbumPublish;

- (id)initWithPublishModel:(id)a0;
- (id)coverTextImagePathUrl;
- (BOOL)needUploadCoverImage;
- (void)consumeUploadCoverResult:(id)a0;
- (void)prepareForUploadCover:(id *)a0 fileURLs:(id *)a1;
- (id)videoCoverImagePathUrl;
- (id)paymentCoverImagePathUrl;
- (void)removeFileWithUrl:(id)a0;
- (void).cxx_destruct;

@end
