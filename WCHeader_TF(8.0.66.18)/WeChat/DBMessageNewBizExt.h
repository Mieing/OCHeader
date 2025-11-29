@class NSString;

@interface DBMessageNewBizExt : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int msgExtColInt1;
@property (nonatomic) unsigned int msgExtColInt2;
@property (retain, nonatomic) NSString *msgExtColString1;
@property (retain, nonatomic) NSString *msgExtColString2;
@property (retain, nonatomic) NSString *chatUsername;
@property (nonatomic) unsigned int msgLocalId;
@property (nonatomic) unsigned int msgType;
@property (nonatomic) unsigned int msgInnerType;
@property (retain, nonatomic) NSString *bizId;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned int invalidTime;
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
+ (const void *)chatUsername;
+ (const void *)__wcdb_synthesize_97:(void *)a0;
+ (id)swift_chatUsername;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_98:(void *)a0;
+ (id)swift_msgLocalId;
+ (const void *)msgType;
+ (const void *)__wcdb_synthesize_99:(void *)a0;
+ (id)swift_msgType;
+ (const void *)msgInnerType;
+ (const void *)__wcdb_synthesize_100:(void *)a0;
+ (id)swift_msgInnerType;
+ (const void *)bizId;
+ (const void *)__wcdb_synthesize_101:(void *)a0;
+ (id)swift_bizId;
+ (const void *)status;
+ (const void *)__wcdb_synthesize_102:(void *)a0;
+ (id)swift_status;
+ (const void *)invalidTime;
+ (const void *)__wcdb_synthesize_103:(void *)a0;
+ (id)swift_invalidTime;
+ (const void *)msgExtColInt1;
+ (const void *)__wcdb_synthesize_104:(void *)a0;
+ (id)swift_msgExtColInt1;
+ (const void *)msgExtColInt2;
+ (const void *)__wcdb_synthesize_105:(void *)a0;
+ (id)swift_msgExtColInt2;
+ (const void *)msgExtColString1;
+ (const void *)__wcdb_synthesize_106:(void *)a0;
+ (id)swift_msgExtColString1;
+ (const void *)msgExtColString2;
+ (const void *)__wcdb_synthesize_107:(void *)a0;
+ (id)swift_msgExtColString2;
+ (void)__wcdb_index_108:(void *)a0;
+ (void)__wcdb_index_109:(void *)a0;

- (void).cxx_destruct;

@end
