@class NSArray, AWELVideoSideBarGuideResponse;

@interface AWEVideoHallResponseModel : AWEBaseApiModel

@property (nonatomic) long long offset;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *blockList;
@property (retain, nonatomic) AWELVideoSideBarGuideResponse *guideConfig;

+ (id)blockListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)guideConfigJSONTransformer;

- (void).cxx_destruct;

@end
