@class NSString, WCStoryMediaItem;

@interface WCStoryUserRelatedCommentObj : NSObject <WCTTableCoding>

@property (retain, nonatomic) WCStoryMediaItem *thumbURLItem;
@property (retain, nonatomic) NSString *tid;
@property (nonatomic) long long maxCommentId;
@property (nonatomic) long long readCommentId;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int dataItemCreateTime;
@property (nonatomic) unsigned int commentCreateTime;
@property (nonatomic) BOOL isConcerned;
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
+ (const void *)__wcdb_synthesize_28:(void *)a0;
+ (id)swift_tid;
+ (const void *)maxCommentId;
+ (const void *)__wcdb_synthesize_29:(void *)a0;
+ (id)swift_maxCommentId;
+ (const void *)readCommentId;
+ (const void *)__wcdb_synthesize_30:(void *)a0;
+ (id)swift_readCommentId;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_31:(void *)a0;
+ (id)swift_username;
+ (const void *)dataItemCreateTime;
+ (const void *)__wcdb_synthesize_32:(void *)a0;
+ (id)swift_dataItemCreateTime;
+ (const void *)commentCreateTime;
+ (const void *)__wcdb_synthesize_33:(void *)a0;
+ (id)swift_commentCreateTime;
+ (const void *)isConcerned;
+ (const void *)__wcdb_synthesize_34:(void *)a0;
+ (id)swift_isConcerned;
+ (void)__wcdb_column_constraint_35:(void *)a0;
+ (void)__wcdb_index_36:(void *)a0;
+ (void)__wcdb_index_37:(void *)a0;

- (void).cxx_destruct;

@end
