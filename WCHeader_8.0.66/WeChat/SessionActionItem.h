@class NSString;

@interface SessionActionItem : MMObject <PBCoding>

@property (nonatomic) unsigned int uiEnterTime;
@property (nonatomic) unsigned int uiStayTime;
@property (nonatomic) unsigned int uiStayWebViewTime;
@property (nonatomic) unsigned int uiSessionType;
@property (nonatomic) unsigned int uiMemberCount;
@property (nonatomic) BOOL bNotifyOpen;
@property (nonatomic) unsigned int uiUnreadCount;
@property (retain, nonatomic) NSString *nsUserName;
@property (retain, nonatomic) NSString *key;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_uiEnterTime;
+ (void)PBArrayAdd_uiStayTime;
+ (void)PBArrayAdd_uiSessionType;
+ (void)PBArrayAdd_uiMemberCount;
+ (void)PBArrayAdd_bNotifyOpen;
+ (void)PBArrayAdd_uiUnreadCount;
+ (void)PBArrayAdd_uiStayWebViewTime;
+ (void)PBArrayAdd_nsUserName;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
