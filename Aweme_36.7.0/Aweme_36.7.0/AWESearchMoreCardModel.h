@class AWESearchMoreCardExtraModel, NSString, NSURL, AWEDiscoverCategoryRecordModel;

@interface AWESearchMoreCardModel : AWEBaseApiModel <AWEIrregularWordProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *searchWord;
@property (copy, nonatomic) NSURL *relatedImageURL;
@property (copy, nonatomic) NSString *relatedHot;
@property (copy, nonatomic) NSString *queryInfo;
@property (nonatomic) BOOL enableTwoLines;
@property (retain, nonatomic) AWEDiscoverCategoryRecordModel *wordRecord;
@property (retain, nonatomic) AWESearchMoreCardExtraModel *extraInfo;

+ (id)extraInfoJSONTransformer;
+ (id)wordRecordJSONTransformer;
+ (id)relatedImageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)getDisplayWord;
- (id)getSearchWord;
- (void).cxx_destruct;

@end
