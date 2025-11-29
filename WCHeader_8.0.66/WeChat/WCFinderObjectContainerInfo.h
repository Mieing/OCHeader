@class NSString;

@interface WCFinderObjectContainerInfo : NSObject

@property (copy, nonatomic) NSString *tid;
@property (copy, nonatomic) NSString *containerId;
@property (nonatomic) unsigned long long cacheTime;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_tid;
+ (const void *)containerId;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_containerId;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_cacheTime;
+ (void)__wcdb_column_constraint_3:(void *)a0;
+ (void)__wcdb_index_4:(void *)a0;
+ (void)__wcdb_index_5:(void *)a0;

- (id)description;
- (void).cxx_destruct;

@end
