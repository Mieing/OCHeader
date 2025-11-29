@class NSString, NSData;

@interface UploadVoiceWrap : NSObject <PBCoding>

@property (retain, nonatomic) NSString *m_nsToUsrName;
@property (nonatomic) long long m_n64SvrID;
@property (nonatomic) unsigned int m_uiLocalID;
@property (nonatomic) unsigned int m_uiOffset;
@property (nonatomic) unsigned int m_uiLen;
@property (nonatomic) unsigned int m_uiCreateTime;
@property (nonatomic) unsigned int m_uiVoiceTime;
@property (nonatomic) unsigned int m_uiVoiceFormat;
@property (nonatomic) unsigned int m_uiEndFlag;
@property (nonatomic) unsigned int m_uiRetryCount;
@property (nonatomic) unsigned int m_uiInsertQueueTime;
@property (nonatomic) unsigned int m_uiCancelFlag;
@property (retain, nonatomic) NSString *m_nsExtend;
@property (retain, nonatomic) NSString *m_nsFromUsrName;
@property (nonatomic) unsigned int m_uiVoiceLen;
@property (retain, nonatomic) NSData *m_dtVoice;
@property (nonatomic) unsigned int m_uiVoiceForwardFlag;
@property (nonatomic) unsigned int m_uiCgi;
@property (retain, nonatomic) NSString *m_nsMsgSource;
@property (retain, nonatomic) NSString *voiceUrl;
@property (retain, nonatomic) NSString *aesKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_uiLocalID;
+ (void)PBArrayAdd_m_uiCreateTime;
+ (void)PBArrayAdd_m_uiOffset;
+ (void)PBArrayAdd_m_uiLen;
+ (void)PBArrayAdd_m_uiVoiceTime;
+ (void)PBArrayAdd_m_uiEndFlag;
+ (void)PBArrayAdd_m_uiRetryCount;
+ (void)PBArrayAdd_m_uiCancelFlag;
+ (void)PBArrayAdd_m_uiVoiceFormat;
+ (void)PBArrayAdd_m_uiInsertQueueTime;
+ (void)PBArrayAdd_m_n64SvrID;
+ (void)PBArrayAdd_m_nsToUsrName;
+ (void)PBArrayAdd_m_nsExtend;
+ (void)initialize;

@end
