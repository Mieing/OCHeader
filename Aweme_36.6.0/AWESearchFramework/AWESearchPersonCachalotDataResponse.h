@class NSArray, AWESearchPersonBusinessConfigModel;

@interface AWESearchPersonCachalotDataResponse : AWESearchResultCachalotDataResponse

@property (retain, nonatomic) AWESearchPersonBusinessConfigModel *businessConfigModel;
@property (copy, nonatomic) NSArray *leafModels;

+ (id)businessConfigModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
