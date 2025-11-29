@class NSString, ShakeInfo;

@interface ShakeBgImgDownloadMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate> {
    unsigned int m_uiCurDownloadID;
    unsigned int m_uiCurTotalLen;
    unsigned int m_uiCurEventID;
    unsigned int m_uiCurDownloadCount;
}

@property (retain, nonatomic) ShakeInfo *m_oShakeInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ResetDownloadInfo;
- (id)init;
- (void)dealloc;
- (void)LoadShakeInfo;
- (void)SaveShakeInfo;
- (unsigned int)GetShakeTimes;
- (unsigned int)GetShakeBgImgID;
- (void)AddShakeTimes:(unsigned int)a0;
- (void)CreateDownloadEvent;
- (void)DownloadBgImg:(unsigned int)a0 TotalLen:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
