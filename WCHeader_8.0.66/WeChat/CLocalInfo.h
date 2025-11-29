@class NSString, NSData;

@interface CLocalInfo : NSObject <NSCoding, PBCoding>

@property (retain, nonatomic) NSString *m_nsCurUsrName;
@property (retain, nonatomic) NSString *m_nsLastUserName;
@property (retain, nonatomic) NSString *m_nsLastLoginName;
@property (retain, nonatomic) NSString *m_nsLastNickName;
@property (nonatomic) unsigned int m_uiLastUin;
@property (retain, nonatomic) NSData *m_dtAutoAuthKey;
@property (retain, nonatomic) NSData *m_dtLastKSid;
@property (nonatomic) unsigned int m_uiBindAcountFlag;
@property (nonatomic) unsigned int m_uiLastLoginAcountType;
@property (retain, nonatomic) NSData *m_nsLastSvrID;
@property (retain, nonatomic) NSString *m_nsPushLoginURLTips;
@property (nonatomic) unsigned int m_uiFontLevel;
@property (nonatomic) unsigned int m_uiGlobalFontLevel;
@property (nonatomic) unsigned int m_uiCachedFontLevel;
@property (nonatomic) unsigned int m_uiManualSetFontLevel;
@property (nonatomic) BOOL m_bHasShowChooseView;
@property (nonatomic) BOOL m_bIsAuthPushLoginURL;
@property (nonatomic) BOOL m_bIsOpenVoicePrint;
@property (nonatomic) unsigned int m_uiWebviewFontLevel;
@property (nonatomic) unsigned int m_uiNetControlBitFlag;
@property (copy, nonatomic) NSString *m_nsLastPhoneNumber;
@property (retain, nonatomic) NSString *m_nsSystemContentSize;
@property (nonatomic) BOOL m_isAreadyShowFontSettingTips;
@property (nonatomic) BOOL m_isAreadyChangeWeChatFontSetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_nsCurUsrName;
+ (void)PBArrayAdd_m_nsLastUserName;
+ (void)PBArrayAdd_m_nsLastLoginName;
+ (void)PBArrayAdd_m_nsLastNickName;
+ (void)PBArrayAdd_m_uiLastUin;
+ (void)PBArrayAdd_m_dtAutoAuthKey;
+ (void)PBArrayAdd_m_dtLastKSid;
+ (void)PBArrayAdd_m_uiBindAcountFlag;
+ (void)PBArrayAdd_m_uiLastLoginAcountType;
+ (void)PBArrayAdd_m_nsLastSvrID;
+ (void)PBArrayAdd_m_nsPushLoginURLTips;
+ (void)PBArrayAdd_m_bHasShowChooseView;
+ (void)PBArrayAdd_m_bIsAuthPushLoginURL;
+ (void)PBArrayAdd_m_bIsOpenVoicePrint;
+ (void)PBArrayAdd_m_uiFontLevel;
+ (void)PBArrayAdd_m_uiGlobalFontLevel;
+ (void)PBArrayAdd_m_uiWebviewFontLevel;
+ (void)PBArrayAdd_m_uiNetControlBitFlag;
+ (void)PBArrayAdd_m_nsLastPhoneNumber;
+ (void)PBArrayAdd_m_nsSystemContentSize;
+ (void)PBArrayAdd_m_isAreadyShowFontSettingTips;
+ (void)PBArrayAdd_m_isAreadyChangeWeChatFontSetting;
+ (void)PBArrayAdd_m_uiCachedFontLevel;
+ (void)PBArrayAdd_m_uiManualSetFontLevel;
+ (void)initialize;

@end
