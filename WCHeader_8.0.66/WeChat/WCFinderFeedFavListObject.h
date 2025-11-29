@class NSString, WCFinderFeedFavListInfoArray;

@interface WCFinderFeedFavListObject : NSObject

@property (copy, nonatomic) NSString *tid;
@property (nonatomic) double cacheTime;
@property (retain, nonatomic) WCFinderFeedFavListInfoArray *favInfoFirstPageArray;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_tid;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_cacheTime;
+ (const void *)favInfoFirstPageArray;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_favInfoFirstPageArray;
+ (void)__wcdb_column_constraint_3:(void *)a0;
+ (void)__wcdb_index_4:(void *)a0;

- (void).cxx_destruct;

@end
