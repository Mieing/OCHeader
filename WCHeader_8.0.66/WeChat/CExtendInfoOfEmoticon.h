@class NSString, CMessageWrap;

@interface CExtendInfoOfEmoticon : NSObject <IMessageWrapExt, IMsgExtendOperation, NSCopying>

@property (retain, nonatomic) NSString *m_nsEmoticonMD5;
@property (nonatomic) unsigned int m_uiEmoticonType;
@property (nonatomic) unsigned int m_uiGameType;
@property (nonatomic) unsigned int m_uiGameContent;
@property (nonatomic) unsigned int m_uiUploadStatus;
@property (copy, nonatomic) NSString *m_nsEmoticonBelongToProductID;
@property (retain, nonatomic) NSString *m_cdnUrlString;
@property (retain, nonatomic) NSString *m_encryptUrlString;
@property (retain, nonatomic) NSString *m_aesKey;
@property (retain, nonatomic) NSString *m_nsExternUrl;
@property (retain, nonatomic) NSString *m_nsExternMd5;
@property (retain, nonatomic) NSString *m_tpUrlString;
@property (retain, nonatomic) NSString *m_authkey;
@property (retain, nonatomic) NSString *m_nsDesignerId;
@property (retain, nonatomic) NSString *m_nsActivityId;
@property (retain, nonatomic) NSString *m_nsLinkId;
@property (retain, nonatomic) NSString *m_nsThumbImgUrl;
@property (nonatomic) unsigned int m_uiEmoticonWidth;
@property (nonatomic) unsigned int m_uiEmoticonHeight;
@property (retain, nonatomic) NSString *m_attachedText;
@property (retain, nonatomic) NSString *m_attachedTextColor;
@property (retain, nonatomic) NSString *m_lensId;
@property (retain, nonatomic) NSString *m_nsEmoticonSvrDescStr;
@property (nonatomic) BOOL disableRecordSend;
@property (nonatomic) BOOL isNonFreeItem;
@property (nonatomic) BOOL isPriceInfoUnkown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) CMessageWrap *m_refMessageWrap;

+ (void)CreateExtendInfoWithType:(unsigned int)a0 retExtendInfo:(id *)a1;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)ChangeForDisplay;
- (id)GetContent;
- (void)UpdateContent:(id)a0;
- (id)GetGameStatReportString;
- (void)UpdateGameInfo:(id)a0;
- (id)GetDisplaySessionContent;
- (id)msgReferSummaryAndReplace:(BOOL)a0;
- (void).cxx_destruct;

@end
