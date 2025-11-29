@class AWESearchMusicBusinessConfigModel, NSArray;

@interface AWESearchMusicCachalotResponse : AWESearchResultCachalotDataResponse

@property (retain, nonatomic) AWESearchMusicBusinessConfigModel *businessConfigModel;
@property (copy, nonatomic) NSArray *leafModels;

+ (id)businessConfigModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
