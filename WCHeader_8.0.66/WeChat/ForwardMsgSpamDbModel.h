@class NSString;

@interface ForwardMsgSpamDbModel : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *msgId;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) BOOL open;
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
+ (const void *)msgId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_msgId;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_username;
+ (const void *)scene;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_scene;
+ (const void *)open;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_open;
+ (void)__wcdb_column_constraint_4:(void *)a0;

- (id)initWithUsername:(id)a0 andScene:(unsigned long long)a1 andMsgId:(id)a2 andOpenStatus:(BOOL)a3;
- (void).cxx_destruct;

@end
