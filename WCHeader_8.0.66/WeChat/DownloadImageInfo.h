@class NSString, CUploadImgWrap, CMessageWrap;

@interface DownloadImageInfo : NSObject {
    CUploadImgWrap *m_wrapDownload;
}

@property (retain, nonatomic) CMessageWrap *m_wrapMsg;
@property (nonatomic) unsigned int m_uiTotalLen;
@property (nonatomic) unsigned int m_uiStartPos;
@property (nonatomic) BOOL m_bDownloadHD;
@property (retain, nonatomic) NSString *m_nsChatName;
@property (nonatomic) unsigned int m_uiNotifyPartLen;
@property (nonatomic) unsigned int m_uiNotifyTotalLen;
@property (nonatomic) unsigned long long m_ui64StartTime;
@property (nonatomic) int m_nRetCode;

- (id)init;
- (BOOL)IsSameInfo:(id)a0;
- (void)UpdateInfo;
- (void)SetTotalLen:(unsigned int)a0;
- (id)GenDownloadInfo;
- (void)NotifyOffset;
- (id)GetStatInfo;
- (void).cxx_destruct;

@end
