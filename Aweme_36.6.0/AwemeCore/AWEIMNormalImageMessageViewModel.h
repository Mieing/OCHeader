@class NSString, AWEIMMessageAttachmentDownloadViewModel, UIImage;

@interface AWEIMNormalImageMessageViewModel : AWEIMMessageViewModel

@property (retain, nonatomic) AWEIMMessageAttachmentDownloadViewModel *imageDownloadVM;
@property (copy, nonatomic) NSString *cachedImageAttachmentFileAbsolutePath;
@property (retain, nonatomic) UIImage *cachedImage;
@property (nonatomic) long long vmState;
@property (nonatomic) double process;
@property (readonly, nonatomic) long long fileSize;

+ (BOOL)enableImageMessageThumbOptWithMessage:(id)a0;
+ (BOOL)enableImageMessageLargeOptWithMessage:(id)a0;
+ (BOOL)enableImageMessageLongOptWithMessage:(id)a0;
+ (BOOL)enableImageMessageClipThumbnailOptWithMessage:(id)a0;

- (void)setupWithMessage:(id)a0;
- (id)largeImageAttachmentMessageExtKey;
- (id)clipThumbnailImageAttachmentMessageExtKey;
- (id)imageAttachmentCacheKey;
- (id)clipThumbnailImageAttachmentCacheKey;
- (id)imageAttachmentMessageExtKey;
- (id)currentReduceResolutionImageWithValue:(id)a0;
- (id)specializedMessage;
- (id)imageAttachmentFileAbsolutePath;
- (void)p_generateThumbnailImageWithOriginalImageLocalPath:(id)a0;
- (id)p_createImageDownloadVMWithCurrentMessage;
- (id)clipThumbnailImageAttachmentFileAbsolutePath;
- (BOOL)p_hasClipThumbnailLocalImage;
- (BOOL)p_hasLocalImageWithReduceResolutionValue:(id)a0;
- (void)p_bindImageDownloadVM;
- (void)p_waitForMessageExtAndShowImage;
- (BOOL)p_getSameImageFromOtherMessage;
- (void)beginLoadProcess;
- (BOOL)p_hasLocalImageFromOtherMessage;
- (void)p_pushStateDownloadingImage;
- (id)p_createImageDownloadVM;
- (void)p_cleanUp;
- (void)p_pushStateNew;
- (id)p_attachmentFilePathWithKey:(id)a0;
- (id)p_attachmentFileAbsolutePathWithKey:(id)a0;
- (BOOL)p_hasLocalDiskCacheImageFromPath:(id)a0;
- (id)p_attachmentFileCacheAbsolutePathWithKey:(id)a0;
- (id)imageAttachmentCacheKeyWithValue:(id)a0;
- (id)imageAttachmentCacheFileAbsolutePath;
- (BOOL)forceReloadByICloud;
- (id)p_fetchClipThumbnailImage;
- (id)p_fetchLocalImageWithReduceResolutionValue:(id)a0;
- (id)p_imageFromAbsolutePath:(id)a0 reduceResolutionValue:(id)a1;
- (void)p_memoryCacheImage:(id)a0 withKey:(id)a1;
- (id)p_reduceImageResolutionFromData:(id)a0 reduceResolutionValue:(id)a1;
- (void)updateCachedImage:(id)a0;
- (void)p_imageDownloadVMStateChanged:(id)a0;
- (void)p_generateThumbnail;
- (void).cxx_destruct;
- (id)init;
- (id)currentImage;
- (void)dealloc;

@end
