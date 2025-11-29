@class MsgDataDownloadLogic, NSString, CMessageWrap;

@interface ImageMsgDataDownloader : NSObject <MsgDataDownloadDelegate>

@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (copy, nonatomic) id /* block */ completeHandler;
@property (retain, nonatomic) MsgDataDownloadLogic *downloadLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMsgWrap:(id)a0;
- (BOOL)startDownloadImageDataWithCompleteHandler:(id /* block */)a0;
- (void)tryStartDownloadLiveVideo;
- (void)downloadLiveVideo;
- (void)onDownloadAnyFail:(id)a0;
- (void)onDownloadSuccess:(id)a0;
- (void)onDownloadCommonFail:(id)a0;
- (void)onDownloadExpireFail:(id)a0;
- (void)onDownloadCancel:(id)a0;
- (void).cxx_destruct;

@end
