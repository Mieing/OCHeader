@class NSMutableArray, OpenBufferUploadInfo;

@interface OpenBufferUploadMgr : MMObject <PBMessageObserverDelegate> {
    unsigned int m_uiCurEventID;
}

@property (retain, nonatomic) NSMutableArray *m_queUpload;
@property (retain, nonatomic) OpenBufferUploadInfo *m_oCurUploadInfo;

- (id)init;
- (void)dealloc;
- (void)ClearEventID;
- (void)StartUpload:(id)a0 ClientAppDataId:(id)a1 UploadBufferData:(id)a2 Scene:(unsigned int)a3;
- (void)CheckQueue;
- (BOOL)CreateUploadEvent;
- (BOOL)CreateUploadAppAttach;
- (void)UploadFail:(unsigned int)a0;
- (void)UploadOK:(BOOL)a0;
- (void)popInfoItem:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
