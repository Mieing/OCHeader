@class NSString, NSMutableDictionary;

@interface ChatRoomToolMessageEventInfo : MMObject <PBCoding, NSCopying>

@property (retain, nonatomic) NSString *eventID;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) unsigned int eventTime;
@property (retain, nonatomic) NSString *appUserName;
@property (retain, nonatomic) NSString *appPath;
@property (retain, nonatomic) NSString *customInfo;
@property (nonatomic) long long nRelatedMesSvrID;
@property (retain, nonatomic) NSString *creatorUserName;
@property (retain, nonatomic) NSString *manager;
@property (retain, nonatomic) NSMutableDictionary *extInfo;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int nReply;
@property (nonatomic) unsigned int isDispose;
@property (copy, nonatomic) NSString *nsNewXMLScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_eventID;
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_eventTime;
+ (void)PBArrayAdd_appUserName;
+ (void)PBArrayAdd_appPath;
+ (void)PBArrayAdd_customInfo;
+ (void)PBArrayAdd_nRelatedMesSvrID;
+ (void)PBArrayAdd_creatorUserName;
+ (void)PBArrayAdd_extInfo;
+ (void)PBArrayAdd_manager;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_nReply;
+ (void)PBArrayAdd_isDispose;
+ (void)initialize;
+ (id)GenLocalEventIdBySvrId:(long long)a0;
+ (id)genMessageEventInfoMsgWrap:(id)a0;
+ (id)genMessageEventInfoWithUserName:(id)a0 andEventID:(id)a1;

- (id)getPBPropertyTable;
- (BOOL)hasCheckTodo;
- (void)setCheckTodo;
- (BOOL)isValid;
- (BOOL)canRevoke;
- (BOOL)hasReplyInfo;
- (id)replyInfo;
- (BOOL)canDisplay;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)genDBContactChatRoomToolMessageEvent;
- (void)copyFromDBMessageEventInfo:(id)a0;
- (void).cxx_destruct;

@end
