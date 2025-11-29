@class NSString, WCCgiBlockHelper, BypEmoticonUploadInfo, StoreEmotionBatchEmojiDownLoadCgi, NSMutableArray, EmoticonUploader;
@protocol BypSendEmotionMessageMgrDelegate;

@interface BypSendEmotionMessageMgr : NSObject <EmoticonUploaderDelegate, IMsgExt> {
    NSMutableArray *_uploadInfoQueue;
    BypEmoticonUploadInfo *_curUploadInfo;
    EmoticonUploader *_emoticonUploader;
    StoreEmotionBatchEmojiDownLoadCgi *_emojiDownloadCgi;
}

@property (retain, nonatomic) WCCgiBlockHelper *curCgiBlockHelper;
@property (weak, nonatomic) id<BypSendEmotionMessageMgrDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)IsMsgInUploadQueue:(id)a0;
- (BOOL)InsertMessageToUploadQueue:(id)a0;
- (void)StartUpload:(id)a0;
- (void)StopUpload:(id)a0;
- (void)StopUploadByChatName:(id)a0;
- (void)CheckUpload;
- (BOOL)CreateUploadEvent;
- (BOOL)StartCdnUpload;
- (void)UploadFail;
- (void)StopCurUpload;
- (void)ClearCurUpload;
- (BOOL)bypSendMsg;
- (id)createEmojiPack;
- (void)onSendSuccessedWithSvrId:(long long)a0;
- (void)modMsgAfterSendFailedWithMsgWrap:(id)a0;
- (void)onEmoticonUploadSuccessWithEmoji:(id)a0 uploadInfo:(id)a1;
- (void)onEmoticonUploadFailWithUploadInfo:(id)a0 reason:(unsigned long long)a1 realMd5:(id)a2;
- (void)OnWillRevokeMsg:(id)a0 revokeContext:(id)a1;
- (void).cxx_destruct;

@end
