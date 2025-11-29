@class NSArray, NSString, NSURL, NSMutableSet;
@protocol ImageDownloadLoaderDelegate;

@interface ImageDownloadLoader : NSObject <MMImageLoaderObserver> {
    NSMutableSet *m_filePathSet;
    BOOL m_isDownloading;
}

@property (weak, nonatomic) id<ImageDownloadLoaderDelegate> delegate;
@property (retain, nonatomic) NSURL *imgUrl;
@property (readonly, nonatomic) NSArray *filePathToSaveList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)addDownloadTaskWithFilePath:(id)a0;
- (void)finishDownloadWithData:(id)a0;
- (void)ImageDidLoadWithData:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void).cxx_destruct;

@end
