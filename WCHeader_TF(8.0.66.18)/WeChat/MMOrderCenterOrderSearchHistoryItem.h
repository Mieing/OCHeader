@class NSString;

@interface MMOrderCenterOrderSearchHistoryItem : NSObject <WCTTableCoding>

@property (copy, nonatomic) NSString *keyword;
@property (nonatomic) unsigned int time;
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
+ (const void *)keyword;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_keyword;
+ (const void *)time;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_time;
+ (void)__wcdb_column_constraint_2:(void *)a0;
+ (void)__wcdb_index_3:(void *)a0;

- (void).cxx_destruct;

@end
