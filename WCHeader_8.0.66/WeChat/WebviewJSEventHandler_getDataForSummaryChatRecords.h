@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_group;

@interface WebviewJSEventHandler_getDataForSummaryChatRecords : WebviewJSEventHandlerBase <MsgDataDownloadDelegate>

@property (retain) NSObject<OS_dispatch_group> *downLoadGroup;
@property (retain) NSMutableArray *downloadLogics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)getFileCdnInfosWithJSEvent:(id)a0 fileIds:(id)a1 helper:(id)a2;
- (void)startFileId2UrlGroupWithItems:(id)a0 JSEvent:(id)a1;
- (void)getFileId2UrlDataWithItems:(id)a0 group:(id)a1 datas:(id)a2;
- (void)startGetCdnUrlWithDatas:(id)a0 JSEvent:(id)a1;
- (void)onDownloadSuccess:(id)a0;
- (void)onDownloadExpireFail:(id)a0;
- (void)onDownloadCommonFail:(id)a0;
- (void)onDownloadCancel:(id)a0;
- (void).cxx_destruct;

@end
