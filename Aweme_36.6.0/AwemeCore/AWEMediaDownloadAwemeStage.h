@class AWEParallelDownloader, NSMutableArray;

@interface AWEMediaDownloadAwemeStage : AWEMediaDownloadBaseStage

@property (retain, nonatomic) AWEParallelDownloader *currentDownloader;
@property (nonatomic) BOOL isCanceled;
@property (retain, nonatomic) NSMutableArray *downloadedImages;
@property (nonatomic) long long currentIndex;
@property (nonatomic) long long downloadingImageCount;
@property (nonatomic) long long downloadedItemCount;

- (void)downloadImage;
- (void)downloadImagesForNowPost;
- (void)downloadSelectedImageFromAlbum;
- (void)downloadUsingCache;
- (void)downloadVideoWithURLList:(id)a0;
- (id)urlWithURLGroup:(id)a0;
- (void)handleDownloadCompleteWithURLGroup:(id)a0 response:(id)a1 fileURL:(id)a2 error:(id)a3;
- (void)p_addNextImageToDownloadQueue;
- (void)p_downloadClipVideoWithURLList:(id)a0 atIndex:(long long)a1 clipIndex:(long long)a2;
- (id)p_videoClipDestinationURLWithClipIndex:(long long)a0;
- (void)prepareWithConfig:(id)a0;
- (long long)progressUnitCount;
- (id)nowPostWatermarkImageDownloadURL;
- (void).cxx_destruct;
- (void)run;
- (void)cancel;
- (void)handleProgress:(double)a0;

@end
