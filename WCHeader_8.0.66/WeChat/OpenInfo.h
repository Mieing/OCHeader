@class NSString, NSMutableDictionary, CMessageWrap;

@interface OpenInfo : NSObject <NSCoding> {
    unsigned long long m_ui64StartTime;
}

@property (nonatomic) unsigned int m_uiLocalID;
@property (retain, nonatomic) NSString *m_nsUsrName;
@property (nonatomic) unsigned int m_uiCreateTime;
@property (nonatomic) unsigned int m_uiScene;
@property (retain, nonatomic) CMessageWrap *m_wrapMsg;
@property (nonatomic) unsigned int m_uiStartPos;
@property (nonatomic) unsigned int m_uiAddQueueTime;
@property (nonatomic) BOOL m_bCheckMd5;
@property (retain, nonatomic) NSString *m_nsAttachId;
@property (retain, nonatomic) NSString *m_nsAttachFileExt;
@property (nonatomic) unsigned int m_uiAttachDataSize;
@property (nonatomic) BOOL m_bUpload;
@property (nonatomic) int m_nRetCode;
@property (retain, nonatomic) NSString *m_nsShareOriginUrl;
@property (retain, nonatomic) NSString *m_nsShareOpenUrl;
@property (retain, nonatomic) NSString *m_nsJsAppId;
@property (retain, nonatomic) NSMutableDictionary *m_dicStatParas;
@property (nonatomic) BOOL m_bFileExistInSvr;
@property (retain, nonatomic) NSString *m_nsMsgMd5;
@property (nonatomic) BOOL m_bSilent;
@property (nonatomic) BOOL m_isDeleted;
@property (nonatomic) BOOL isRevokingMsg;
@property (nonatomic) BOOL isSendingMsg;
@property (nonatomic) BOOL isSendingOverWriteMsg;
@property (nonatomic) BOOL isParallelUpload;
@property (retain, nonatomic) NSString *bigFileSignature;
@property (nonatomic) unsigned long long emojiDataLength;
@property (nonatomic) BOOL disableHitCheck;
@property (nonatomic) BOOL autoDownload;
@property (nonatomic) long long downloadBehavior;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)GetMsg;
- (BOOL)IsCanUpload;
- (BOOL)IsCanDownload;
- (void)SetStatus;
- (void)SetStartTime;
- (id)GetStatInfo;
- (void).cxx_destruct;

@end
