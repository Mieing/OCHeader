@class NSString;

@interface DBContactIndexRecord : NSObject <WCTTableCoding>

@property (nonatomic) int type;
@property (retain, nonatomic) NSString *maxIndexedUserName;
@property (retain, nonatomic) NSString *unIndexedUsernames;
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
+ (const void *)type;
+ (const void *)__wcdb_synthesize_54:(void *)a0;
+ (id)swift_type;
+ (const void *)maxIndexedUserName;
+ (const void *)__wcdb_synthesize_55:(void *)a0;
+ (id)swift_maxIndexedUserName;
+ (const void *)unIndexedUsernames;
+ (const void *)__wcdb_synthesize_56:(void *)a0;
+ (id)swift_unIndexedUsernames;
+ (void)__wcdb_column_constraint_57:(void *)a0;

- (void).cxx_destruct;

@end
