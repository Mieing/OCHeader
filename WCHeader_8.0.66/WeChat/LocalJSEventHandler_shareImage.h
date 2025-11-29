@class NSString, NSData;

@interface LocalJSEventHandler_shareImage : LocalJSEventHandler_BaseEvent <ForwardMessageLogicDelegate, IHttpCacheExt, WCActionSheetDelegate, WCCommitViewResultDelegate>

@property (copy, nonatomic) NSString *cacheKey;
@property (retain, nonatomic) NSData *imageData;
@property (nonatomic) BOOL isDownloadingImage;
@property (nonatomic) BOOL willShareToFriend;
@property (nonatomic) BOOL willShareToTimeLine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)handleJSEvent:(id)a0;
- (void)showActionSheet;
- (void)getImageDataWithHttpUrl:(id)a0;
- (id)genKeyForUrl:(id)a0;
- (void)tryShareToDestination:(unsigned long long)a0;
- (void)shareImageToFriendWithData:(id)a0;
- (void)shareImageToTimeLineWithData:(id)a0;
- (void)OnHttpGetFinish:(id)a0 response:(id)a1 ErrNo:(int)a2 isWebp:(BOOL)a3;
- (id)getCurrentViewController;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onCancelForwardForForwardView:(id)a0;
- (void)onDoneForwardForForwardView:(id)a0;
- (void).cxx_destruct;

@end
