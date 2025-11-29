@class NSString;

@interface EdgeComputingCacheDataModel : MMObject <PBCoding, NSCopying, WCTTableCoding>

@property (retain, nonatomic) NSString *configID;
@property (nonatomic) unsigned long long reportTimeEC;
@property (retain, nonatomic) NSString *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;

+ (void)PBArrayAdd_configID;
+ (void)PBArrayAdd_reportTimeEC;
+ (void)PBArrayAdd_data;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)configID;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_configID;
+ (const void *)reportTimeEC;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_reportTimeEC;
+ (const void *)data;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_data;

- (id)getPBPropertyTable;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toString;
- (void).cxx_destruct;

@end
