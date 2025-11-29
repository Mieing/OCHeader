@class NSString;

@interface WCFinderPrefetchFeature : NSObject <PBCoding>

@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long action;
@property (copy, nonatomic) NSString *redDotIdentifier;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long shortTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_timestamp;
+ (void)PBArrayAdd_shortTimestamp;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_action;
+ (void)PBArrayAdd_redDotIdentifier;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)scene;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_scene;
+ (const void *)action;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_action;
+ (const void *)redDotIdentifier;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_redDotIdentifier;
+ (const void *)timestamp;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_timestamp;
+ (const void *)shortTimestamp;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_shortTimestamp;
+ (void)__wcdb_table_constraint_5:(void *)a0;
+ (void)__wcdb_table_constraint_6:(void *)a0;
+ (void)__wcdb_table_constraint_7:(void *)a0;
+ (void)__wcdb_index_8:(void *)a0;

- (id)getPBPropertyTable;
- (id)initWithTimestamp:(unsigned long long)a0 scene:(unsigned long long)a1 action:(unsigned long long)a2 redDotIdentifier:(id)a3;
- (long long)compare:(id)a0;
- (void).cxx_destruct;

@end
