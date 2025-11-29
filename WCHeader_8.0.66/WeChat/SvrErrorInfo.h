@class NSString;

@interface SvrErrorInfo : MMObject <PBCoding>

@property (retain, nonatomic) NSString *m_nsContent;
@property (retain, nonatomic) NSString *m_nsNoticeID;
@property (retain, nonatomic) NSString *m_nsUrl;
@property (nonatomic) unsigned int m_uiTime;
@property (nonatomic) unsigned int m_uiStatus;
@property (retain, nonatomic) NSString *m_nsTipsContent;
@property (nonatomic) unsigned int m_uiExpiredTime;
@property (retain, nonatomic) NSString *m_position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_nsContent;
+ (void)PBArrayAdd_m_nsNoticeID;
+ (void)PBArrayAdd_m_nsUrl;
+ (void)PBArrayAdd_m_uiTime;
+ (void)PBArrayAdd_m_uiStatus;
+ (void)PBArrayAdd_m_nsTipsContent;
+ (void)PBArrayAdd_m_uiExpiredTime;
+ (void)PBArrayAdd_m_position;
+ (void)initialize;

@end
