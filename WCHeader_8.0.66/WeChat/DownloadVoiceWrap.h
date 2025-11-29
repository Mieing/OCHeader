@class NSString, NSData;

@interface DownloadVoiceWrap : NSObject <PBCoding>

@property (retain, nonatomic) NSString *m_nsChatUsrName;
@property (nonatomic) unsigned int m_uiLocalID;
@property (nonatomic) long long m_n64SvrID;
@property (nonatomic) unsigned int m_uiCreateTime;
@property (nonatomic) unsigned int m_uiVoiceLen;
@property (nonatomic) unsigned int m_uiVoiceTime;
@property (nonatomic) unsigned int m_uiEndFlag;
@property (nonatomic) unsigned int m_uiRetryCount;
@property (nonatomic) unsigned long long m_ui64BufId;
@property (retain, nonatomic) NSString *voiceUrl;
@property (retain, nonatomic) NSString *aesKey;
@property (retain, nonatomic) NSString *xml;
@property (nonatomic) unsigned int m_uiOffset;
@property (nonatomic) unsigned int m_uiLen;
@property (retain, nonatomic) NSData *m_dtVoice;
@property (nonatomic) unsigned int m_uiCancelFlag;
@property (nonatomic) unsigned int startDownloadTime;
@property (nonatomic) BOOL bReportCost60s;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_uiLocalID;
+ (void)PBArrayAdd_m_uiCreateTime;
+ (void)PBArrayAdd_m_uiVoiceLen;
+ (void)PBArrayAdd_m_uiVoiceTime;
+ (void)PBArrayAdd_m_uiEndFlag;
+ (void)PBArrayAdd_m_uiRetryCount;
+ (void)PBArrayAdd_m_n64SvrID;
+ (void)PBArrayAdd_m_nsChatUsrName;
+ (void)PBArrayAdd_m_ui64BufId;
+ (void)PBArrayAdd_voiceUrl;
+ (void)PBArrayAdd_aesKey;
+ (void)PBArrayAdd_xml;
+ (void)initialize;

@end
