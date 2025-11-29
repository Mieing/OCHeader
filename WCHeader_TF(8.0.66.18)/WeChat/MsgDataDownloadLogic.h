@class NSString, CMessageWrap;
@protocol MsgDataDownloadDelegate;

@interface MsgDataDownloadLogic : NSObject <IMsgExt, IDownloadImageExt, IRecordDownloadExt> {
    CMessageWrap *m_msgWrap;
    BOOL m_downloadRawVideo;
}

@property (weak, nonatomic) id<MsgDataDownloadDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)startDownloadMsg:(id)a0;
- (BOOL)startDownloadMsgImg:(id)a0 HD:(BOOL)a1;
- (BOOL)startDownloadMsgVideo:(id)a0 HD:(BOOL)a1;
- (void)stopDownload;
- (void)onDownloadSuccess:(id)a0;
- (void)onDownloadPart:(id)a0 PartLen:(unsigned int)a1 TotalLen:(unsigned int)a2;
- (void)onDownloadExpireFail:(id)a0;
- (void)onDownloadCommonFail:(id)a0;
- (void)onDownloadCancel:(id)a0;
- (void)OnMsgDownloadAppAttachCommonFail:(id)a0 MsgWrap:(id)a1;
- (void)OnMsgDownloadAppAttachExpiredFail:(id)a0 MsgWrap:(id)a1;
- (void)OnMsgDownloadAppAttachSuccess:(id)a0 MsgWrap:(id)a1;
- (void)OnMsgDownloadAppAttachCancel:(id)a0 MsgWrap:(id)a1;
- (void)OnModMsg:(id)a0 MsgWrap:(id)a1;
- (void)OnUpdateVideoStatus:(id)a0 MsgWrap:(id)a1;
- (void)OnMsgDownloadVideoSuccess:(id)a0 MsgWrap:(id)a1;
- (void)OnMsgDownloadVideoExpiredFail:(id)a0 MsgWrap:(id)a1;
- (void)OnMsgDownloadVideoCommonFail:(id)a0 MsgWrap:(id)a1;
- (void)OnMsgDownloadVideoCancel:(id)a0 MsgWrap:(id)a1;
- (void)OnDownloadImageExpired:(id)a0;
- (void)OnDownloadImageFail:(id)a0;
- (void)OnDownloadImageOk:(id)a0;
- (void)OnDownloadImagePart:(id)a0 PartLen:(unsigned int)a1 TotalLen:(unsigned int)a2;
- (void)OnDownloadImagePartNew:(id)a0 PartLen:(unsigned int)a1 TotalLen:(unsigned int)a2 TryShow:(BOOL)a3;
- (void)OnDownloadImageStopByChatName:(id)a0 FromDelMsg:(BOOL)a1;
- (void)OnDownloadImageStop:(id)a0;
- (void)OnDownloadRecordMessageExpired:(id)a0 DataId:(id)a1;
- (void)OnDownloadRecordMessageFail:(id)a0 DataId:(id)a1 failRetCode:(int)a2;
- (void)OnRecordMessageDownloadOK:(id)a0;
- (void)OnDownloadRecordMessagePart:(id)a0 DataId:(id)a1 PartLen:(unsigned int)a2 TotalLen:(unsigned int)a3;
- (void).cxx_destruct;

@end
