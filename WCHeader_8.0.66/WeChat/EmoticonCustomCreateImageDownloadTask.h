@class NSArray, NSMutableArray, NSString;

@interface EmoticonCustomCreateImageDownloadTask : EmoticonCustomCreateDownloadTask <MMImageLoaderObserver>

@property (retain, nonatomic) NSArray *mediaInfoArray;
@property (retain, nonatomic) NSMutableArray *needDownloadImages;
@property (copy, nonatomic) id /* block */ finderProgressBlock;
@property (copy, nonatomic) id /* block */ finderSucBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithFinderMediaInfoArray:(id)a0;
- (void)dealloc;
- (void)startDownload;
- (BOOL)interruptDownload;
- (void)tryDownloadNextImage;
- (void)ImageDidLoadWithData:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (double)currentDownloadingProgress;
- (BOOL)isDownloadingMultiImages;
- (void).cxx_destruct;

@end
