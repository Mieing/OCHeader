@class NSString;

@interface FTSIntelligentMsgUserNameIdItem : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int userNameId;
@property (nonatomic) unsigned int validFlag;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int preCursorMesId;
@property (nonatomic) unsigned int nextCursorMesId;
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
+ (const void *)userNameId;
+ (const void *)__wcdb_synthesize_112:(void *)a0;
+ (id)swift_userNameId;
+ (const void *)validFlag;
+ (const void *)__wcdb_synthesize_113:(void *)a0;
+ (id)swift_validFlag;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_114:(void *)a0;
+ (id)swift_userName;
+ (const void *)preCursorMesId;
+ (const void *)__wcdb_synthesize_115:(void *)a0;
+ (id)swift_preCursorMesId;
+ (const void *)nextCursorMesId;
+ (const void *)__wcdb_synthesize_116:(void *)a0;
+ (id)swift_nextCursorMesId;
+ (void)__wcdb_column_constraint_117:(void *)a0;
+ (void)__wcdb_column_constraint_118:(void *)a0;
+ (void)__wcdb_column_constraint_119:(void *)a0;
+ (void)__wcdb_column_constraint_120:(void *)a0;

- (id)init;
- (void).cxx_destruct;

@end
