@class NSArray, AWENewHotSearchModel, NSString, AWEHotSpotBottomBarInfo;

@interface AWEAwemeHotSpotResponseModel : AWEAwemeResponseModel

@property (retain, nonatomic) AWENewHotSearchModel *hotSearchModel;
@property (nonatomic) long long totalCount;
@property (copy, nonatomic) NSArray *hotSpotCommentList;
@property (copy, nonatomic) NSArray *microToutiaoArticleList;
@property (copy, nonatomic) NSString *hideVideoInfo;
@property (nonatomic) long long bottomBarType;
@property (retain, nonatomic) AWEHotSpotBottomBarInfo *bottomBarInfo;

+ (id)hotSearchModelTransformer;
+ (id)hotSpotCommentListJSONTransformer;
+ (id)bottomBarInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
