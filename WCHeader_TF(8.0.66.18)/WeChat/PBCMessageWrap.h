@class NSString;

@interface PBCMessageWrap : NSObject <PBCoding, WCTColumnCoding>

@property (nonatomic) unsigned int mesSvrId;
@property (nonatomic) unsigned int mesLocalId;
@property (nonatomic) unsigned int messageType;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned int imgStatus;
@property (nonatomic) unsigned int downloadStatus;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSString *fromUser;
@property (retain, nonatomic) NSString *toUser;
@property (retain, nonatomic) NSString *realChatUser;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) long long n64MesSvrId;
@property (retain, nonatomic) NSString *msgSource;
@property (retain, nonatomic) NSString *specifiedChatName;
@property (nonatomic) unsigned int isSenderStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_mesSvrId;
+ (void)PBArrayAdd_mesLocalId;
+ (void)PBArrayAdd_messageType;
+ (void)PBArrayAdd_status;
+ (void)PBArrayAdd_imgStatus;
+ (void)PBArrayAdd_downloadStatus;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_fromUser;
+ (void)PBArrayAdd_toUser;
+ (void)PBArrayAdd_realChatUser;
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_n64MesSvrId;
+ (void)PBArrayAdd_msgSource;
+ (void)PBArrayAdd_specifiedChatName;
+ (void)PBArrayAdd_isSenderStatus;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

- (id)toCMessageWrap;
- (void)setFromCMessageWrap:(id)a0;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (void).cxx_destruct;

@end
