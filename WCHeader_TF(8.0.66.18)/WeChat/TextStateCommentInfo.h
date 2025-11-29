@class NSString, StatusCommentMessageThumb;

@interface TextStateCommentInfo : NSObject <WCTTableCoding, TextStateBaseNotifyInfo>

@property (retain, nonatomic) NSString *fromUsername;
@property (retain, nonatomic) NSString *textStateId;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *commentId;
@property (retain, nonatomic) NSString *rootCommentId;
@property (nonatomic) unsigned long long timeStamp;
@property (nonatomic) BOOL hadRead;
@property (retain, nonatomic) NSString *extInfo;
@property (nonatomic) BOOL bNotify;
@property (nonatomic) BOOL isDeleted;
@property (retain, nonatomic) NSString *feedOwnerUsername;
@property (nonatomic) unsigned int commentCount;
@property (retain, nonatomic) StatusCommentMessageThumb *messageThumbData;
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
+ (const void *)fromUsername;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_fromUsername;
+ (const void *)textStateId;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_textStateId;
+ (const void *)content;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_content;
+ (const void *)commentId;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_commentId;
+ (const void *)rootCommentId;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_rootCommentId;
+ (const void *)timeStamp;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_timeStamp;
+ (const void *)hadRead;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_hadRead;
+ (const void *)extInfo;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_extInfo;
+ (const void *)bNotify;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_bNotify;
+ (const void *)isDeleted;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_isDeleted;
+ (const void *)feedOwnerUsername;
+ (const void *)__wcdb_synthesize_10:(void *)a0;
+ (id)swift_feedOwnerUsername;
+ (const void *)commentCount;
+ (const void *)__wcdb_synthesize_11:(void *)a0;
+ (id)swift_commentCount;
+ (void)__wcdb_table_constraint_12:(void *)a0;
+ (void)__wcdb_table_constraint_13:(void *)a0;
+ (void)__wcdb_table_constraint_14:(void *)a0;
+ (void)__wcdb_index_15:(void *)a0;
+ (id)GenerateCommentInfoWithDataItem:(id)a0;

- (id)displayContent;
- (unsigned int)createTime;
- (id)profileContact;
- (id)username;
- (id)statusID;
- (id)notifyListReportParams;
- (void).cxx_destruct;

@end
