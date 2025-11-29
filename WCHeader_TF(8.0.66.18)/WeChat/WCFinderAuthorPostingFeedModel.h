@class NSString;

@interface WCFinderAuthorPostingFeedModel : NSObject

@property (retain, nonatomic) NSString *tid;
@property (retain, nonatomic) NSString *authorUsername;
@property (nonatomic) unsigned long long createTime;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_tid;
+ (const void *)authorUsername;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_authorUsername;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_createTime;
+ (void)__wcdb_column_constraint_3:(void *)a0;
+ (void)__wcdb_index_4:(void *)a0;

- (void).cxx_destruct;

@end
