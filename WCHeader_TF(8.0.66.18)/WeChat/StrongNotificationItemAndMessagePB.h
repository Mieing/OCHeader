@class NSString, WCFinderGlobalPushInfo, MMSessionInfo, StrongNotificationItemPB;

@interface StrongNotificationItemAndMessagePB : MMObject <PBCoding>

@property (retain, nonatomic) NSString *nsForcePushId;
@property (retain, nonatomic) NSString *nsUsrName;
@property (retain, nonatomic) NSString *nsDescription;
@property (retain, nonatomic) NSString *nsSubject;
@property (nonatomic) unsigned int uiStatue;
@property (retain, nonatomic) StrongNotificationItemPB *nsStrongNotificationItem;
@property (retain, nonatomic) NSString *nsFeedID;
@property (nonatomic) unsigned int uiMesLocalID;
@property (nonatomic) double nsCreateTime;
@property (retain, nonatomic) WCFinderGlobalPushInfo *nsFinderGlobalPushInfo;
@property (retain, nonatomic) MMSessionInfo *sessionInfo;
@property (nonatomic) BOOL hideStrongNotificationTop;
@property (nonatomic) BOOL ignorePlaySoundAndAppVibration;
@property (nonatomic) BOOL ignoreCache;
@property (retain, nonatomic) NSString *notifyWording;
@property (nonatomic) BOOL isCustomizationNotify;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_nsForcePushId;
+ (void)PBArrayAdd_nsUsrName;
+ (void)PBArrayAdd_nsDescription;
+ (void)PBArrayAdd_uiStatue;
+ (void)PBArrayAdd_nsStrongNotificationItem;
+ (void)PBArrayAdd_nsFeedID;
+ (void)PBArrayAdd_uiMesLocalID;
+ (void)PBArrayAdd_nsSubject;
+ (void)PBArrayAdd_nsCreateTime;
+ (void)PBArrayAdd_nsFinderGlobalPushInfo;
+ (void)PBArrayAdd_hideStrongNotificationTop;
+ (void)PBArrayAdd_ignorePlaySoundAndAppVibration;
+ (void)PBArrayAdd_ignoreCache;
+ (void)PBArrayAdd_notifyWording;
+ (void)PBArrayAdd_isCustomizationNotify;
+ (void)initialize;

@end
