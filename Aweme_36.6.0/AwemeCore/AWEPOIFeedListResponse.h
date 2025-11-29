@class AWEPOIDouDiscountResModel, NSArray, NSString, AWEPoiRankFeedResStruct, AWEPOIFeedApiDuration, AWEPOILynxModel, AWEPOIFeedAwemeResModel;

@interface AWEPOIFeedListResponse : AWEBaseApiModel

@property (copy, nonatomic) NSArray *awemeList;
@property (nonatomic) long long nextCursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *dynamicText;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *removeAwemeID;
@property (copy, nonatomic) NSString *selfPubAwemeCase;
@property (copy, nonatomic) NSArray *hotWordList;
@property (retain, nonatomic) AWEPOIFeedAwemeResModel *awemeRes;
@property (retain, nonatomic) NSArray *insertLynxCards;
@property (retain, nonatomic) AWEPOILynxModel *poiFeedFixLayer;
@property (retain, nonatomic) AWEPoiRankFeedResStruct *poiRankRes;
@property (retain, nonatomic) AWEPOIDouDiscountResModel *douDiscountRes;
@property (retain, nonatomic) AWEPOIFeedApiDuration *feedApiDuration;

+ (id)awemeListJSONTransformer;
+ (id)hotWordListJSONTransformer;
+ (id)insertLynxCardsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
