@class NSString, BulletCommentContentInfo, BulletCommentDisplayInfo;

@interface WCFinderBulletCommentInfo : NSObject <WCTTableCoding>

@property (nonatomic) unsigned long long commentInfoId;
@property (nonatomic) int contentType;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) double videoTimestamp;
@property (nonatomic) double createTime;
@property (nonatomic) int commentSource;
@property (nonatomic) int userIdentity;
@property (nonatomic) unsigned int likeCount;
@property (nonatomic) unsigned int likeFlag;
@property (retain, nonatomic) BulletCommentContentInfo *contentInfo;
@property (copy, nonatomic) NSString *reportJson;
@property (nonatomic) int displayType;
@property (retain, nonatomic) BulletCommentDisplayInfo *displayInfo;
@property (nonatomic) unsigned long long cacheTime;
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
+ (const void *)commentInfoId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_commentInfoId;
+ (const void *)contentType;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_contentType;
+ (const void *)content;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_content;
+ (const void *)videoTimestamp;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_videoTimestamp;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_createTime;
+ (const void *)commentSource;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_commentSource;
+ (const void *)userIdentity;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_userIdentity;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_cacheTime;
+ (const void *)likeCount;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_likeCount;
+ (const void *)likeFlag;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_likeFlag;
+ (const void *)contentInfo;
+ (const void *)__wcdb_synthesize_10:(void *)a0;
+ (id)swift_contentInfo;
+ (const void *)displayType;
+ (const void *)__wcdb_synthesize_11:(void *)a0;
+ (id)swift_displayType;
+ (const void *)displayInfo;
+ (const void *)__wcdb_synthesize_12:(void *)a0;
+ (id)swift_displayInfo;
+ (void)__wcdb_column_constraint_13:(void *)a0;
+ (void)__wcdb_column_constraint_14:(void *)a0;
+ (void)__wcdb_index_15:(void *)a0;

- (id)initWithBulletCommentInfo:(id)a0;
- (void).cxx_destruct;

@end
