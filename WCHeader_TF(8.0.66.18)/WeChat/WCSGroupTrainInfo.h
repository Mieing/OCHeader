@class NSString, NSData, NSMutableArray;

@interface WCSGroupTrainInfo : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *gId;
@property (retain, nonatomic) NSData *info;
@property (nonatomic) unsigned int lastSearchTime;
@property (retain, nonatomic) NSMutableArray *arrClicks;
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
+ (const void *)gId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_gId;
+ (const void *)info;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_info;
+ (const void *)lastSearchTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_lastSearchTime;
+ (void)__wcdb_column_constraint_3:(void *)a0;
+ (void)__wcdb_column_constraint_4:(void *)a0;

- (BOOL)addOneClick:(int)a0;
- (unsigned int)getClickCountForRecentDays:(unsigned int)a0 nowDayOffset:(int)a1;
- (void).cxx_destruct;

@end
