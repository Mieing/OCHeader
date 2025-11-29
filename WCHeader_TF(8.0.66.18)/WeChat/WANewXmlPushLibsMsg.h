@class NSString;

@interface WANewXmlPushLibsMsg : NSObject <WCTTableCoding>

@property (copy, nonatomic) NSString *msgId;
@property (copy, nonatomic) NSString *appId;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int expireTime;
@property (nonatomic) unsigned int busiType;
@property (nonatomic) unsigned int msgType;
@property (copy, nonatomic) NSString *dataJson;
@property (nonatomic) unsigned int receiveTime;
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
+ (const void *)appId;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_appId;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_createTime;
+ (const void *)expireTime;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_expireTime;
+ (const void *)busiType;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_busiType;
+ (const void *)msgType;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_msgType;
+ (const void *)dataJson;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_dataJson;
+ (const void *)receiveTime;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_receiveTime;
+ (void)__wcdb_table_constraint_8:(void *)a0;
+ (void)__wcdb_table_constraint_9:(void *)a0;

- (id)toDictionary;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
