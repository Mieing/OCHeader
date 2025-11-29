@class NSArray;

@interface AWEPublishExclusionListResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *exclusionList;
@property (nonatomic) long long totalCount;
@property (retain, nonatomic) NSArray *secUserList;

+ (id)exclusionListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
