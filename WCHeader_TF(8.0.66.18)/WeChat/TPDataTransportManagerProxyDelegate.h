@class NSString, TPPlayerEventPublisher;
@protocol TPProxyPlayDelegate;

@interface TPDataTransportManagerProxyDelegate : NSObject <TPProxyPlayDelegate>

@property (weak, nonatomic) id<TPProxyPlayDelegate> outerDelegate;
@property (retain, nonatomic) TPPlayerEventPublisher *publisher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)getCurrentPlayClipNo;
- (long long)getCurrentPlayOffset;
- (long long)getCurrentPosition;
- (id)getPlayInfo:(id)a0;
- (long long)getPlayerBufferLength;
- (void)onDownloadCdnUrlExpiredWithKVInfo:(id)a0;
- (void)onDownloadCdnUrlInfoUpdateWithUrl:(id)a0 cdnIP:(id)a1 uIP:(id)a2 errcodeStr:(id)a3;
- (void)onDownloadCdnUrlUpdate:(id)a0;
- (void)onDownloadErrorWithModuleId:(int)a0 errorCode:(int)a1 extInfo:(id)a2;
- (void)onDownloadFinish;
- (void)onDownloadProgressUpdateWithPlayableDuration:(int)a0 downloadSpeedKBs:(int)a1 currentDownloadSizeByte:(long long)a2 totalFileSizeByte:(long long)a3 extraInfo:(id)a4;
- (void)onDownloadProtocolUpdateWithProtocol:(id)a0 protocolVer:(id)a1;
- (void)onDownloadStatusUpdateWithStatusCode:(int)a0;
- (id)onPlayCallbackWithMessageType:(unsigned long long)a0 ext1:(id)a1 ext2:(id)a2 ext3:(id)a3 ext4:(id)a4;
- (void).cxx_destruct;

@end
