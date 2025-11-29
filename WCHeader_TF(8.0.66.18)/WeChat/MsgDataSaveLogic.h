@class NSString, NSMutableArray, NSMutableDictionary;
@protocol MsgDataSaveLogicDelegate;

@interface MsgDataSaveLogic : NSObject <MsgDataDownloadDelegate> {
    id<MsgDataSaveLogicDelegate> m_delegate;
    NSMutableDictionary *m_dicMsgDownloading;
    NSMutableArray *m_arrMsgToSave;
    NSMutableArray *m_arrMsgExpired;
    BOOL m_bOK;
    BOOL m_bExpired;
    BOOL m_bDownloadFail;
    BOOL m_bSaveFail;
    BOOL m_bAllSaved;
    unsigned int m_uiShareForbided;
}

@property (nonatomic) long long scene;
@property (retain, nonatomic) NSMutableArray *arrSuccMsgs;
@property (retain, nonatomic) NSMutableArray *arrExistFile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)endLogic;
- (BOOL)saveToAlbum;
- (BOOL)isShowUI;
- (id)imagePath:(id)a0 forSave:(BOOL)a1;
- (void)saveMsg:(id)a0 completionBlock:(id /* block */)a1;
- (void)saveOneByOne:(id)a0;
- (void)onSave:(id)a0;
- (void)onSave:(id)a0 isShowTip:(BOOL)a1;
- (void)realityDoSave;
- (id)getSaveTipTitle;
- (void)startDownload;
- (void)cancelLogic;
- (void)checkDownLoadEnd;
- (void)onDownloadSuccess:(id)a0;
- (void)onDownloadExpireFail:(id)a0;
- (void)onDownloadCommonFail:(id)a0;
- (void)onDownloadCancel:(id)a0;
- (void).cxx_destruct;

@end
