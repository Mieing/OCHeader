@class NSString, FinderPreloadObjectInfo;

@interface WCFinderFeedPreloadObjectInfo : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *tid;
@property (nonatomic) double interestFactor;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) FinderPreloadObjectInfo *objectInfo;
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
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_tid;
+ (const void *)interestFactor;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_interestFactor;
+ (const void *)scene;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_scene;
+ (const void *)objectInfo;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_objectInfo;
+ (void)__wcdb_table_constraint_4:(void *)a0;
+ (void)__wcdb_table_constraint_5:(void *)a0;
+ (void)__wcdb_index_6:(void *)a0;

- (id)initWithObjectInfo:(id)a0;
- (void).cxx_destruct;

@end
