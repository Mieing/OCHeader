@class NSString;

@interface FTS5IntelligentMsgItem : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int userNameId;
@property (nonatomic) unsigned int msgLocalId;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSString *ocrText;
@property (retain, nonatomic) NSString *faceAlbumLabels;
@property (retain, nonatomic) NSString *classificationLabels;
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
+ (const void *)__wcdb_synthesize_99:(void *)a0;
+ (id)swift_userNameId;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_100:(void *)a0;
+ (id)swift_msgLocalId;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_101:(void *)a0;
+ (id)swift_createTime;
+ (const void *)ocrText;
+ (const void *)__wcdb_synthesize_102:(void *)a0;
+ (id)swift_ocrText;
+ (const void *)faceAlbumLabels;
+ (const void *)__wcdb_synthesize_103:(void *)a0;
+ (id)swift_faceAlbumLabels;
+ (const void *)classificationLabels;
+ (const void *)__wcdb_synthesize_104:(void *)a0;
+ (id)swift_classificationLabels;
+ (void)__wcdb_virtual_table_105:(void *)a0;
+ (void)__wcdb_virtual_table_106:(void *)a0;
+ (void)__wcdb_column_constraint_107:(void *)a0;
+ (void)__wcdb_column_constraint_108:(void *)a0;
+ (void)__wcdb_column_constraint_109:(void *)a0;
+ (void)__wcdb_column_constraint_110:(void *)a0;
+ (void)__wcdb_column_constraint_111:(void *)a0;

- (id)init;
- (void).cxx_destruct;

@end
