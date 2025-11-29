@class NSString;

@interface WCJdRemindItem : MMObject <PBCoding>

@property (nonatomic) unsigned long long ui64SvrMsgId;
@property (nonatomic) unsigned int uiBizType;
@property (retain, nonatomic) NSString *nsActivityId;
@property (nonatomic) unsigned int uiExpireTime;
@property (nonatomic) BOOL bFindNeedShowRedDot;
@property (nonatomic) BOOL bCellShowRedDot;
@property (retain, nonatomic) NSString *nsCellTitle;
@property (retain, nonatomic) NSString *nsPushContent;
@property (retain, nonatomic) NSString *nsJumpUrl;
@property (retain, nonatomic) NSString *nsJumpWeapp;
@property (retain, nonatomic) NSString *nsJumpWeappPath;
@property (nonatomic) long long nsJumpWeappVersion;
@property (retain, nonatomic) NSString *nsAlertViewWording;
@property (retain, nonatomic) NSString *nsConfirmWording;
@property (retain, nonatomic) NSString *nsCancelWording;
@property (nonatomic) BOOL bHasRead;
@property (nonatomic) unsigned int uiStartTime;
@property (nonatomic) unsigned int uiUrlStartTime;
@property (nonatomic) unsigned int uiUrlExpireTime;
@property (retain, nonatomic) NSString *nsIcon;
@property (retain, nonatomic) NSString *nsTitle;
@property (nonatomic) unsigned int uiTitleStartTime;
@property (nonatomic) unsigned int uiTitleExpireTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_ui64SvrMsgId;
+ (void)PBArrayAdd_uiBizType;
+ (void)PBArrayAdd_nsActivityId;
+ (void)PBArrayAdd_uiExpireTime;
+ (void)PBArrayAdd_bFindNeedShowRedDot;
+ (void)PBArrayAdd_bCellShowRedDot;
+ (void)PBArrayAdd_nsCellTitle;
+ (void)PBArrayAdd_nsPushContent;
+ (void)PBArrayAdd_nsJumpUrl;
+ (void)PBArrayAdd_nsAlertViewWording;
+ (void)PBArrayAdd_nsConfirmWording;
+ (void)PBArrayAdd_nsCancelWording;
+ (void)PBArrayAdd_bHasRead;
+ (void)PBArrayAdd_uiStartTime;
+ (void)PBArrayAdd_uiUrlStartTime;
+ (void)PBArrayAdd_uiUrlExpireTime;
+ (void)PBArrayAdd_nsIcon;
+ (void)PBArrayAdd_nsTitle;
+ (void)PBArrayAdd_uiTitleStartTime;
+ (void)PBArrayAdd_uiTitleExpireTime;
+ (void)PBArrayAdd_nsJumpWeapp;
+ (void)PBArrayAdd_nsJumpWeappPath;
+ (void)PBArrayAdd_nsJumpWeappVersion;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
