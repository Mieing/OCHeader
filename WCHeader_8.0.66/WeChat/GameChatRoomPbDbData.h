@class NSString, NSData, WXPBGeneratedMessage;

@interface GameChatRoomPbDbData : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *keyWithCategroy;
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSData *pbData;
@property (retain, nonatomic) NSString *additionalInfo;
@property (retain, nonatomic) NSString *pbClassName;
@property (nonatomic) double createTime;
@property (nonatomic) double expireDuration;
@property (retain, nonatomic) WXPBGeneratedMessage *pbMsg;
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
+ (const void *)keyWithCategroy;
+ (const void *)__wcdb_synthesize_11:(void *)a0;
+ (id)swift_keyWithCategroy;
+ (const void *)category;
+ (const void *)__wcdb_synthesize_12:(void *)a0;
+ (id)swift_category;
+ (const void *)pbData;
+ (const void *)__wcdb_synthesize_13:(void *)a0;
+ (id)swift_pbData;
+ (const void *)pbClassName;
+ (const void *)__wcdb_synthesize_14:(void *)a0;
+ (id)swift_pbClassName;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_15:(void *)a0;
+ (id)swift_createTime;
+ (const void *)expireDuration;
+ (const void *)__wcdb_synthesize_16:(void *)a0;
+ (id)swift_expireDuration;
+ (const void *)additionalInfo;
+ (const void *)__wcdb_synthesize_17:(void *)a0;
+ (id)swift_additionalInfo;
+ (void)__wcdb_column_constraint_18:(void *)a0;
+ (id)dbKeyFromCategory:(id)a0 key:(id)a1;

- (id)initWithCategory:(id)a0 key:(id)a1 pbData:(id)a2;
- (BOOL)isOfPbClass:(Class)a0;
- (void).cxx_destruct;

@end
