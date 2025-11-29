@class WCDataItem, NSString, MMUIViewController, NSMutableArray, WCFinderSnsPostProcessMgr;

@interface WCAlbumForwardFinderUtil : NSObject <WCFacadeExt, WCFinderSnsPostProcessMgrDelegate, WCFinderPostViewControllerDelegate>

@property (retain, nonatomic) WCDataItem *feed;
@property (retain, nonatomic) NSMutableArray *mediaList;
@property (retain, nonatomic) NSMutableArray *prepardDownloadMediaInfos;
@property (weak, nonatomic) MMUIViewController *currentVc;
@property (retain, nonatomic) WCFinderSnsPostProcessMgr *finderPostMgr;
@property (copy, nonatomic) id /* block */ onAllMediaDownloadFinish;
@property (copy, nonatomic) id /* block */ onConfirmSend;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)selectMediaListNotDownloadFinish:(id)a0;
+ (id)selectMediaListFilePaths:(id)a0;
+ (long long)mediaListType:(id)a0;
+ (id)getPostTimeStampWith:(unsigned int)a0;
+ (id)getSelectedMediaContent:(id)a0 mediaList:(id)a1;

- (void)forwardFeed:(id)a0 currentVc:(id)a1;
- (void)downloadMediaList:(id)a0;
- (void)onDownloadFinish:(id)a0 downloadType:(long long)a1;
- (void)onDownloadFail:(id)a0 downloadType:(long long)a1;
- (void)callAllDownloadSuccess;
- (void)callSomeDownloadFailed;
- (void)pushToEditViewController;
- (void)finderPostMgrOnSendMediaWith:(id)a0;
- (id)finderPostMgrGetSelectedMediaContent;
- (void)finderPostMgrCancelPostProcess;
- (void)postViewControllerStartUpload;
- (void)postViewControllerCancelPostWithModel:(id)a0;
- (void)postViewControllerDidSaveDraft;
- (void).cxx_destruct;

@end
