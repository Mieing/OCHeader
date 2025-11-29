@class WCFinderEventModel, NSString, WCFinderEditTextWidgetStateArray, WCFinderDraftUploadProgress, WCFinderPostSessionModel;

@interface WCFinderFeedDraft : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *draftId;
@property (nonatomic) int objectType;
@property (nonatomic) unsigned long long draftSource;
@property (retain, nonatomic) WCFinderPostSessionModel *postSession;
@property (nonatomic) BOOL isNoServerDraft;
@property (nonatomic) double createTime;
@property (nonatomic) BOOL cloudDraft;
@property (retain, nonatomic) WCFinderEventModel *eventInfo;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) WCFinderEditTextWidgetStateArray *coverTextWidgetState;
@property (retain, nonatomic) WCFinderDraftUploadProgress *progress;
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
+ (const void *)draftId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_draftId;
+ (const void *)objectType;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_objectType;
+ (const void *)isNoServerDraft;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_isNoServerDraft;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_createTime;
+ (const void *)cloudDraft;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_cloudDraft;
+ (const void *)eventInfo;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_eventInfo;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_username;
+ (const void *)postSession;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_postSession;
+ (const void *)coverTextWidgetState;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_coverTextWidgetState;
+ (const void *)draftSource;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_draftSource;
+ (void)__wcdb_column_constraint_10:(void *)a0;
+ (void)__wcdb_column_constraint_11:(void *)a0;

- (id)init;
- (id)dataItem;
- (void)setDataItem:(id)a0;
- (long long)compareWithSorttime:(id)a0;
- (BOOL)isModifyDraft;
- (void).cxx_destruct;

@end
