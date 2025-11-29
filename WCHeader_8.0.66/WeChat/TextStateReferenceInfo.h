@class NSString, StatusCommentMessageThumb;

@interface TextStateReferenceInfo : NSObject <WCTTableCoding, TextStateBaseNotifyInfo>

@property (retain, nonatomic) NSString *textStateId;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int referenceCount;
@property (nonatomic) BOOL isRead;
@property (nonatomic) BOOL notify;
@property (retain, nonatomic) NSString *extInfo;
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
+ (const void *)textStateId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_textStateId;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_username;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_createTime;
+ (const void *)referenceCount;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_referenceCount;
+ (const void *)isRead;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_isRead;
+ (const void *)notify;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_notify;
+ (const void *)extInfo;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_extInfo;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_type;
+ (void)__wcdb_table_constraint_8:(void *)a0;
+ (void)__wcdb_table_constraint_9:(void *)a0;
+ (void)__wcdb_table_constraint_10:(void *)a0;
+ (id)referenceInfoFromStatusReferenced:(id)a0 textStateId:(id)a1;

- (id)profileContact;
- (id)statusID;
- (id)notifyListReportParams;
- (void).cxx_destruct;

@end
