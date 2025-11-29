@class NSString, FinderEnhanceTypeList, FinderSeeLaterInfo;

@interface WCFinderSceneRelatedInfo : NSObject <WCTTableCoding>

@property (copy, nonatomic) NSString *tid;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) FinderEnhanceTypeList *enhanceConfiguration;
@property (retain, nonatomic) FinderSeeLaterInfo *seeLaterInfo;
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
+ (const void *)scene;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_scene;
+ (const void *)enhanceConfiguration;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_enhanceConfiguration;
+ (const void *)seeLaterInfo;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_seeLaterInfo;
+ (void)__wcdb_table_constraint_4:(void *)a0;
+ (void)__wcdb_table_constraint_5:(void *)a0;
+ (id)sceneRelatedInfoFromDataItem:(id)a0 commentScene:(int)a1;

- (void)mergeIntoDataItem:(id)a0;
- (void).cxx_destruct;

@end
