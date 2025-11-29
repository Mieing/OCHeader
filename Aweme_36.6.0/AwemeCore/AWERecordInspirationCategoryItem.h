@class AWERecordInspirationNetHelper, NSString;

@interface AWERecordInspirationCategoryItem : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWERecordInspirationNetHelper *netHelper;
@property (nonatomic) long long cursor;
@property (nonatomic) long long longCursor;
@property (nonatomic) long long count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *searchContent;
@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSString *cardInsertInfo;
@property (nonatomic) long long searchPageType;
@property (nonatomic) BOOL haveQueryRunning;
@property (copy, nonatomic) id /* block */ detailBlock;
@property (nonatomic) long long categoryId;
@property (copy, nonatomic) NSString *categoryName;
@property (nonatomic) unsigned long long categoryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)currentIsRecommendTab;
- (BOOL)currentIsAIGCTab;
- (BOOL)currentIsAIGCPlayTab;
- (BOOL)currentIsTestAIGCTab;
- (BOOL)currentIsLoraSuiteTab;
- (BOOL)currentIsCollectTab;
- (BOOL)currentIsTemplateTab;
- (void).cxx_destruct;

@end
