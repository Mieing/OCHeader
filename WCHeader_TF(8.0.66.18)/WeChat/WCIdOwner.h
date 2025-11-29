@class NSString;

@interface WCIdOwner : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *Id;
@property (retain, nonatomic) NSString *username;
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
+ (const void *)Id;
+ (const void *)__wcdb_synthesize_81:(void *)a0;
+ (id)swift_Id;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_82:(void *)a0;
+ (id)swift_username;
+ (void)__wcdb_column_constraint_83:(void *)a0;
+ (void)__wcdb_column_constraint_84:(void *)a0;
+ (void)__wcdb_column_constraint_85:(void *)a0;

- (void).cxx_destruct;

@end
