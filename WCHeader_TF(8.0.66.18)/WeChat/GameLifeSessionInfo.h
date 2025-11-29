@class NSString;

@interface GameLifeSessionInfo : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *talker;
@property (retain, nonatomic) NSString *selfUsername;
@property (nonatomic) unsigned long long disabledStaticPanelIdFlag;
@property (nonatomic) unsigned long long disabledAppPanelIdFlag;
@property (nonatomic) unsigned int sessionType;
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
+ (const void *)talker;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_talker;
+ (const void *)selfUsername;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_selfUsername;
+ (const void *)disabledStaticPanelIdFlag;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_disabledStaticPanelIdFlag;
+ (const void *)disabledAppPanelIdFlag;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_disabledAppPanelIdFlag;
+ (const void *)sessionType;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_sessionType;
+ (void)__wcdb_column_constraint_6:(void *)a0;

- (void).cxx_destruct;

@end
