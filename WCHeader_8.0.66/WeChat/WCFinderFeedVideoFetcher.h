@class WCFinderFeedMediaWrap, WCFinderFeedContentVM, NSString;

@interface WCFinderFeedVideoFetcher : NSObject <WCPlayerDownloaderExt, WCFinderVideoDownLoadMgrExt>

@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) WCFinderFeedMediaWrap *currentDownloadingMediaWrap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetcherWithContentVM:(id)a0;
+ (id)localFilePathOfMediaWrap:(id)a0;

- (id)initWithContentVM:(id)a0;
- (void)dealloc;
- (void)asyncGetDownloadVideoWithCompletion:(id /* block */)a0;
- (void)finderMediaVideoStreamDownloadSuccessfulWithTid:(id)a0;
- (void)finderMediaVideoStreamDownloadFailedWithTid:(id)a0;
- (void)OnCdnDownloadError:(id)a0;
- (void).cxx_destruct;

@end
