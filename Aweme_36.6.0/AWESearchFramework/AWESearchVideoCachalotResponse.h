@class AWESearchGlobalDoodleConfigModel, NSArray, AWESearchVideoBusinessConfigModel;

@interface AWESearchVideoCachalotResponse : AWESearchResultCachalotDataResponse

@property (retain, nonatomic) AWESearchVideoBusinessConfigModel *businessConfigModel;
@property (retain, nonatomic) AWESearchGlobalDoodleConfigModel *extraModel;
@property (copy, nonatomic) NSArray *leafModels;

+ (id)businessConfigModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
