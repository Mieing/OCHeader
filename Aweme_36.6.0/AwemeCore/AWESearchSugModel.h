@class NSString, NSArray, AWESearchUser, AWEDiscoverCategoryRecordModel, AWESearchSugExtraModel;

@interface AWESearchSugModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSArray *hightlightPositions;
@property (retain, nonatomic) AWESearchUser *user;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *sugTypeString;
@property (retain, nonatomic) AWEDiscoverCategoryRecordModel *wordRecord;
@property (retain, nonatomic) AWESearchSugExtraModel *extraInfo;

+ (id)userJSONTransformer;
+ (id)hightlightPositionsJSONTransformer;
+ (id)extraInfoJSONTransformer;
+ (id)wordRecordJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
