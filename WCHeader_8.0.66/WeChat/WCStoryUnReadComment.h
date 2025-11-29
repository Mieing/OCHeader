@class NSString;

@interface WCStoryUnReadComment : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *tid;
@property (retain, nonatomic) NSString *commentId;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int commentType;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)unreadCommentWithStoryComment:(id)a0;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_tid;
+ (const void *)commentId;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_commentId;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_createTime;
+ (const void *)commentType;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_commentType;
+ (void)__wcdb_table_constraint_4:(void *)a0;
+ (void)__wcdb_table_constraint_5:(void *)a0;
+ (void)__wcdb_table_constraint_6:(void *)a0;
+ (void)__wcdb_index_7:(void *)a0;
+ (void)__wcdb_index_8:(void *)a0;
+ (void)__wcdb_index_9:(void *)a0;

- (id)initWithStoryComment:(id)a0;
- (void).cxx_destruct;

@end
