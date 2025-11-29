@class WCFinderDataItem, NSString;

@interface WCFinderDataDownloadObject : NSObject <WCFinderVideoDownLoadMgrExt>

@property (weak, nonatomic) WCFinderDataItem *dataItem;
@property (copy, nonatomic) id /* block */ downloadCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)setupWithDataItem:(id)a0 downloadCompletion:(id /* block */)a1;

- (void)startDownload;
- (void)finderMediaVideoStreamDownloadSuccessfulWithTid:(id)a0;
- (void)finderMediaVideoStreamDownloadFailedWithTid:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
