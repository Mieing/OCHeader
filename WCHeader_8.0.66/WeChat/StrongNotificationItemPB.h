@class NSString;

@interface StrongNotificationItemPB : MMObject <PBCoding>

@property (retain, nonatomic) NSString *nsForcePushId;
@property (retain, nonatomic) NSString *nsUsrName;
@property (nonatomic) double nsCreateTime;
@property (nonatomic) double nsExpiredTime;
@property (retain, nonatomic) NSString *nsDesc;
@property (retain, nonatomic) NSString *nsUserIcon;
@property (retain, nonatomic) NSString *nsExtinfo;
@property (nonatomic) unsigned int uiStatue;
@property (nonatomic) unsigned int uiAction;
@property (nonatomic) double nsOperateTime;
@property (retain, nonatomic) NSString *nsApproveIcon;
@property (retain, nonatomic) NSString *nsNickName;
@property (nonatomic) double nsDisplayTime;
@property (retain, nonatomic) NSString *nsSubject;
@property (retain, nonatomic) NSString *notifyWording;
@property (retain, nonatomic) NSString *noticeId;
@property (retain, nonatomic) NSString *topicTitle;
@property (nonatomic) BOOL isCustomizationNotify;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_nsForcePushId;
+ (void)PBArrayAdd_nsUsrName;
+ (void)PBArrayAdd_nsCreateTime;
+ (void)PBArrayAdd_nsExpiredTime;
+ (void)PBArrayAdd_nsDesc;
+ (void)PBArrayAdd_nsUserIcon;
+ (void)PBArrayAdd_nsExtinfo;
+ (void)PBArrayAdd_uiStatue;
+ (void)PBArrayAdd_uiAction;
+ (void)PBArrayAdd_nsOperateTime;
+ (void)PBArrayAdd_nsApproveIcon;
+ (void)PBArrayAdd_nsNickName;
+ (void)PBArrayAdd_nsSubject;
+ (void)PBArrayAdd_notifyWording;
+ (void)PBArrayAdd_noticeId;
+ (void)PBArrayAdd_topicTitle;
+ (void)PBArrayAdd_isCustomizationNotify;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyToOther:(id)a0;
- (void).cxx_destruct;

@end
