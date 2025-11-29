@class NSString, WCFinderFeedInfoSubTidArray, WCFinderContactPreviewData;

@interface WCFinderWechatContactExtDatas : NSObject <WCTTableCoding>

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) WCFinderContactPreviewData *previewData;
@property (retain, nonatomic) WCFinderFeedInfoSubTidArray *likedFeedTidList;
@property (nonatomic) BOOL likedFeedListHasNoData;
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
+ (const void *)name;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_name;
+ (const void *)previewData;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_previewData;
+ (const void *)likedFeedTidList;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_likedFeedTidList;
+ (const void *)likedFeedListHasNoData;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_likedFeedListHasNoData;
+ (void)__wcdb_column_constraint_4:(void *)a0;
+ (void)__wcdb_column_constraint_5:(void *)a0;

- (id)getLikedFeedTidList;
- (void)updateLikedFeedTidList:(id)a0;
- (void)ensurePreivewDataExistsThenUpdate:(id /* block */)a0;
- (void).cxx_destruct;

@end
