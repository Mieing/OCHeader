@class NSString, WCFinderFeedInfoSubTidArray;

@interface WCFinderUserPageCacheModel : NSObject <WCTTableCoding>

@property (copy, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) WCFinderFeedInfoSubTidArray *firstPageTidArray;
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
+ (const void *)finderUsername;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_finderUsername;
+ (const void *)firstPageTidArray;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_firstPageTidArray;
+ (void)__wcdb_column_constraint_2:(void *)a0;

- (void).cxx_destruct;

@end
