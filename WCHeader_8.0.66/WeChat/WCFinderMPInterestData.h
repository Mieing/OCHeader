@class NSString, WCFinderDataItemMutableArray;

@interface WCFinderMPInterestData : NSObject <PBCoding, WCTColumnCoding>

@property (copy, nonatomic) NSString *mpSessionId;
@property (copy, nonatomic) NSString *finderSessionId;
@property (retain, nonatomic) WCFinderDataItemMutableArray *dataItemArray;
@property (nonatomic) unsigned long long cacheTime;
@property (nonatomic) unsigned long long expiredTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_mpSessionId;
+ (void)PBArrayAdd_finderSessionId;
+ (void)PBArrayAdd_dataItemArray;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_expiredTime;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)mpSessionId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_mpSessionId;
+ (const void *)finderSessionId;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_finderSessionId;
+ (const void *)dataItemArray;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_dataItemArray;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_cacheTime;
+ (const void *)expiredTime;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_expiredTime;
+ (void)__wcdb_column_constraint_5:(void *)a0;
+ (void)__wcdb_index_6:(void *)a0;

- (id)getPBPropertyTable;
- (id)firstDataItemTid;
- (id)topicWording;
- (void).cxx_destruct;

@end
