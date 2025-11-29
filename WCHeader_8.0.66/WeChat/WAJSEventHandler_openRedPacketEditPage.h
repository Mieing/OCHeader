@class NSString;

@interface WAJSEventHandler_openRedPacketEditPage : WAJSEventHandler_BaseEvent <WCFinderVideoDownLoadMgrExt, WCFinderRedPacketVideoEditViewControllerDelegate>

@property (copy, nonatomic) NSString *currentDownloadFeedId;
@property (nonatomic) long long minSeconds;
@property (nonatomic) long long maxSeconds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)dealloc;
- (BOOL)targetDataItemHasVideoPath:(id)a0;
- (void)presentRedPacketVideoEditViewControllerFromDataItem:(id)a0;
- (void)finderMediaVideoStreamDownloadSuccessfulWithTid:(id)a0;
- (void)finderMediaVideoDownloadQueueChange;
- (void)finderMediaVideoStreamDownloadFailedWithTid:(id)a0;
- (void)backFailAction;
- (void)onRedPacketEditResponse:(id)a0;
- (void)onRedPacketEditCancel;
- (void).cxx_destruct;

@end
