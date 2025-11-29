@class NSString, FinderObjectMonotonicData;

@interface WCFinderObjectMonotonicData : NSObject <WCTTableCoding>

@property (copy, nonatomic) NSString *tid;
@property (retain, nonatomic) FinderObjectMonotonicData *monoData;
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
+ (const void *)monoData;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_monoData;
+ (void)__wcdb_column_constraint_2:(void *)a0;
+ (id)monotonciDataWithDataItem:(id)a0;
+ (void)compareDataVersionWithTid:(id)a0 updateVersion:(id)a1 localVersion:(id)a2 monoDataSourceType:(unsigned long long)a3 resultBlock:(id /* block */)a4;

- (void)mergeMonoData:(id)a0 monoDataSourceType:(unsigned long long)a1;
- (void)compareDataVersionWithUpdateVersion:(id)a0 localVersion:(id)a1 monoDataSourceType:(unsigned long long)a2 resultBlock:(id /* block */)a3;
- (void).cxx_destruct;

@end
