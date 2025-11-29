@class NSString, NSArray;

@interface GameHaowanPostInfoTableItem : MMObject <WCTTableCoding>

@property (retain, nonatomic) NSString *postId;
@property (nonatomic) unsigned int postType;
@property (retain, nonatomic) NSString *extra;
@property (nonatomic) unsigned int fromSource;
@property (nonatomic) unsigned long long createTime;
@property (nonatomic) unsigned int retryCount;
@property (nonatomic) int publishState;
@property (nonatomic) BOOL isMiniGameVideo;
@property (retain, nonatomic) NSString *videoId;
@property (nonatomic) BOOL needDelAfterPost;
@property (retain, nonatomic) NSArray *mediaList;
@property (readonly, nonatomic) BOOL isBroken;
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
+ (const void *)postId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_postId;
+ (const void *)postType;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_postType;
+ (const void *)extra;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_extra;
+ (const void *)fromSource;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_fromSource;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_createTime;
+ (const void *)retryCount;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_retryCount;
+ (const void *)publishState;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_publishState;
+ (const void *)isMiniGameVideo;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_isMiniGameVideo;
+ (const void *)videoId;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_videoId;
+ (const void *)needDelAfterPost;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_needDelAfterPost;
+ (void)__wcdb_column_constraint_10:(void *)a0;

- (void).cxx_destruct;

@end
