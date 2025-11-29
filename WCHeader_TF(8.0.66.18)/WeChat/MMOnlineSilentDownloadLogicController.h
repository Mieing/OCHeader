@class SilentDownloadMessageWrap, NSMutableArray;

@interface MMOnlineSilentDownloadLogicController : NSObject <IMsgExt, IDownloadImageExt, CNetworkStatusExt, PBMessageObserverDelegate>

@property (retain, nonatomic) NSMutableArray *silentDownloadFileList;
@property (retain, nonatomic) NSMutableArray *sentDownloadFileList;
@property (retain, nonatomic) SilentDownloadMessageWrap *currentDownloadImage;
@property (retain, nonatomic) SilentDownloadMessageWrap *currentDownloadVideo;
@property (retain, nonatomic) SilentDownloadMessageWrap *currentDownloadFile;

- (id)init;
- (void)dealloc;
- (void)reloadDataFromFile;
- (void)saveDataToFile;
- (void)preStartSilentDownloadFile:(id)a0 svrid:(long long)a1;
- (void)sendSilentDownloadFileToBackDevice:(id)a0;
- (BOOL)isWrapMsgInSilentDownloading:(id)a0;
- (BOOL)shouldShowSetting;
- (BOOL)allowSilentDownload;
- (void)setAllowSilentDownload:(BOOL)a0;
- (BOOL)isExistedInDownloadList:(id)a0;
- (BOOL)canMediaDownloadedNow:(unsigned int)a0;
- (BOOL)isMessageValidForSilentDownload:(id)a0;
- (BOOL)isTwoMessageEqual:(id)a0 silent:(id)a1;
- (void)removeMessageWithUsername:(id)a0;
- (void)checkList;
- (BOOL)isUserNeedProcess:(id)a0;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void)OnMsgNotAddDBNotify:(id)a0 MsgWrap:(id)a1;
- (BOOL)isHDImageDownloaded:(id)a0;
- (void)OnDownloadImageOk:(id)a0;
- (void)OnDownloadImageExpired:(id)a0;
- (void)OnDownloadImageStop:(id)a0;
- (void)OnDownloadImageFail:(id)a0;
- (void)OnDownloadImageStopByChatName:(id)a0 FromDelMsg:(BOOL)a1;
- (void)OnMsgDownloadVideoSuccess:(id)a0 MsgWrap:(id)a1;
- (void)OnMsgDownloadVideoExpiredFail:(id)a0 MsgWrap:(id)a1;
- (void)OnMsgDownloadVideoCommonFail:(id)a0 MsgWrap:(id)a1;
- (void)OnMsgDownloadVideoCancel:(id)a0 MsgWrap:(id)a1;
- (BOOL)isFileDownloaded:(id)a0;
- (void)OnMsgDownloadAppAttachSuccess:(id)a0 MsgWrap:(id)a1;
- (void)OnMsgDownloadAppAttachExpiredFail:(id)a0 MsgWrap:(id)a1;
- (void)OnMsgDownloadAppAttachCommonFail:(id)a0 MsgWrap:(id)a1;
- (void)OnMsgDownloadAppAttachCancel:(id)a0 MsgWrap:(id)a1;
- (void)ReachabilityChange:(unsigned int)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
