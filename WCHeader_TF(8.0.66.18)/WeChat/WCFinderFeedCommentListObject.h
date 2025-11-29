@class NSString, WCFinderCommenListArray;

@interface WCFinderFeedCommentListObject : NSObject

@property (copy, nonatomic) NSString *tid;
@property (retain, nonatomic) WCFinderCommenListArray *commentList;
@property (nonatomic) unsigned long long cacheTimestamp;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_tid;
+ (const void *)commentList;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_commentList;
+ (const void *)cacheTimestamp;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_cacheTimestamp;
+ (void)__wcdb_column_constraint_3:(void *)a0;
+ (void)__wcdb_index_4:(void *)a0;

- (void).cxx_destruct;

@end
