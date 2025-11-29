@class NSString;

@interface DBContactChatRoomToolWeApp : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *appUserName;
@property (retain, nonatomic) NSString *appPagePath;
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
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_30:(void *)a0;
+ (id)swift_userName;
+ (const void *)appUserName;
+ (const void *)__wcdb_synthesize_31:(void *)a0;
+ (id)swift_appUserName;
+ (const void *)appPagePath;
+ (const void *)__wcdb_synthesize_32:(void *)a0;
+ (id)swift_appPagePath;
+ (void)__wcdb_column_constraint_33:(void *)a0;
+ (void)__wcdb_column_constraint_34:(void *)a0;
+ (void)__wcdb_table_constraint_35:(void *)a0;
+ (void)__wcdb_table_constraint_36:(void *)a0;

- (void).cxx_destruct;

@end
