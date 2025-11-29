@class NSString;

@interface WCFinderExposeFeedInfo : NSObject <WCTColumnCoding, PBCoding>

@property (copy, nonatomic) NSString *tid;
@property (nonatomic) unsigned long long exposeTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_exposeTime;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_tid;
+ (const void *)exposeTime;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_exposeTime;
+ (void)__wcdb_column_constraint_2:(void *)a0;
+ (void)__wcdb_index_3:(void *)a0;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (void).cxx_destruct;

@end
