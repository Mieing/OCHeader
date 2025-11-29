@class NSString;

@interface WeChatOutMsg : MMObject <WCTTableCoding, NSCopying>

@property (nonatomic) unsigned int localID;
@property (nonatomic) unsigned long long svrID;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int readStatus;
@property (nonatomic) unsigned int wcoMsgType;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned int pushTime;
@property (nonatomic) int reserve1;
@property (nonatomic) unsigned int reserve2;
@property (retain, nonatomic) NSString *reserve3;
@property (retain, nonatomic) NSString *reserve4;
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
+ (const void *)localID;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_localID;
+ (const void *)svrID;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_svrID;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_createTime;
+ (const void *)readStatus;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_readStatus;
+ (const void *)wcoMsgType;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_wcoMsgType;
+ (const void *)title;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_title;
+ (const void *)content;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_content;
+ (const void *)pushTime;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_pushTime;
+ (const void *)reserve1;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_reserve1;
+ (const void *)reserve2;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_reserve2;
+ (const void *)reserve3;
+ (const void *)__wcdb_synthesize_10:(void *)a0;
+ (id)swift_reserve3;
+ (const void *)reserve4;
+ (const void *)__wcdb_synthesize_11:(void *)a0;
+ (id)swift_reserve4;
+ (void)__wcdb_column_constraint_12:(void *)a0;

@end
