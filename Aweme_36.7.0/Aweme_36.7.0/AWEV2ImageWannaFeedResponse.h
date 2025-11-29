@class NSArray, AWEExtraModelV2;

@interface AWEV2ImageWannaFeedResponse : AWEBaseResponseModel

@property (nonatomic) long long hasMore;
@property (copy, nonatomic) NSArray *awemeListArray;
@property (retain, nonatomic) AWEExtraModelV2 *extraModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
