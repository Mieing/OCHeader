@class NSString;

@interface WCFinderMsgSessionStatus : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned int myAccountType;
@property (retain, nonatomic) NSString *realChatUserName;
@property (retain, nonatomic) NSString *selfChatUserName;
@property (nonatomic) BOOL rejectMsgStatus;
@property (nonatomic) BOOL isInNormalSession;
@property (nonatomic) BOOL canSendAttachment;
@property (nonatomic) BOOL disableSendmsgNeedFollow;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)sessionId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_sessionId;
+ (const void *)myAccountType;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_myAccountType;
+ (const void *)realChatUserName;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_realChatUserName;
+ (const void *)rejectMsgStatus;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_rejectMsgStatus;
+ (const void *)isInNormalSession;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_isInNormalSession;
+ (const void *)canSendAttachment;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_canSendAttachment;
+ (const void *)selfChatUserName;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_selfChatUserName;
+ (const void *)disableSendmsgNeedFollow;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_disableSendmsgNeedFollow;
+ (void)__wcdb_column_constraint_8:(void *)a0;

- (id)init;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
