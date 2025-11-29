@class NSString;

@interface DBMessageExt : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int ConIntRes1;
@property (nonatomic) unsigned int ConIntRes2;
@property (nonatomic) unsigned int ConIntRes3;
@property (retain, nonatomic) NSString *ConStrRes1;
@property (retain, nonatomic) NSString *ConStrRes2;
@property (retain, nonatomic) NSString *ConStrRes3;
@property (nonatomic) unsigned int msgLocalId;
@property (nonatomic) unsigned int msgFlag;
@property (retain, nonatomic) NSString *msgSource;
@property (retain, nonatomic) NSString *msgIdentify;
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
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_72:(void *)a0;
+ (id)swift_msgLocalId;
+ (const void *)msgFlag;
+ (const void *)__wcdb_synthesize_73:(void *)a0;
+ (id)swift_msgFlag;
+ (const void *)ConIntRes2;
+ (const void *)__wcdb_synthesize_74:(void *)a0;
+ (id)swift_ConIntRes2;
+ (const void *)ConIntRes3;
+ (const void *)__wcdb_synthesize_75:(void *)a0;
+ (id)swift_ConIntRes3;
+ (const void *)msgSource;
+ (const void *)__wcdb_synthesize_76:(void *)a0;
+ (id)swift_msgSource;
+ (const void *)msgIdentify;
+ (const void *)__wcdb_synthesize_77:(void *)a0;
+ (id)swift_msgIdentify;
+ (const void *)ConStrRes1;
+ (const void *)__wcdb_synthesize_78:(void *)a0;
+ (id)swift_ConStrRes1;
+ (const void *)ConStrRes2;
+ (const void *)__wcdb_synthesize_79:(void *)a0;
+ (id)swift_ConStrRes2;
+ (const void *)ConStrRes3;
+ (const void *)__wcdb_synthesize_80:(void *)a0;
+ (id)swift_ConStrRes3;
+ (const void *)ConIntRes1;
+ (const void *)__wcdb_synthesize_81:(void *)a0;
+ (id)swift_ConIntRes1;
+ (void)__wcdb_column_constraint_82:(void *)a0;
+ (void)__wcdb_index_83:(void *)a0;
+ (void)__wcdb_column_constraint_84:(void *)a0;
+ (void)__wcdb_column_constraint_85:(void *)a0;
+ (void)__wcdb_column_constraint_86:(void *)a0;
+ (void)__wcdb_column_constraint_87:(void *)a0;

- (void).cxx_destruct;

@end
