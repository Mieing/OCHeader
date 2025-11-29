@class NSString, NSData;

@interface DBBypInfoBizSyncItem : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *chatName;
@property (retain, nonatomic) NSData *buff;
@property (nonatomic) unsigned int subType;
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
+ (const void *)chatName;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_chatName;
+ (const void *)buff;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_buff;
+ (const void *)subType;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_subType;
+ (void)__wcdb_column_constraint_3:(void *)a0;

- (void).cxx_destruct;

@end
