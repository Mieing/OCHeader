@class NSString;

@interface CUpdateInfo : NSObject <NSCoding, PBCoding>

@property (nonatomic) unsigned int m_uiNewVersion;
@property (copy, nonatomic) NSString *m_nsDescription;
@property (nonatomic) BOOL m_bShowInSetting;
@property (nonatomic) BOOL m_bShowInTab;
@property (nonatomic) BOOL m_bSysNoticeShowInTab;
@property (nonatomic) unsigned int m_uiLastShowAlertTime;
@property (nonatomic) unsigned int m_uiSysNoticeVersion;
@property (nonatomic) unsigned int m_uiSysNoticeCount;
@property (nonatomic) unsigned int m_uiNewVersionUpdateTime;
@property (copy, nonatomic) NSString *m_nsNewestVersionDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_uiNewVersion;
+ (void)PBArrayAdd_m_nsDescription;
+ (void)PBArrayAdd_m_bShowInSetting;
+ (void)PBArrayAdd_m_bShowInTab;
+ (void)PBArrayAdd_m_uiLastShowAlertTime;
+ (void)PBArrayAdd_m_uiNewVersionUpdateTime;
+ (void)PBArrayAdd_m_uiSysNoticeVersion;
+ (void)PBArrayAdd_m_uiSysNoticeCount;
+ (void)PBArrayAdd_m_bSysNoticeShowInTab;
+ (void)PBArrayAdd_m_nsNewestVersionDescription;
+ (void)initialize;
+ (void)updateSysNotice:(id)a0;

@end
