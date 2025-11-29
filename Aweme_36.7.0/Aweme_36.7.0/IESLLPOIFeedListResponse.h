@class NSArray, NSString, IESLLPOIFeedApiDuration, IESLLPOIFeedAwemeResModel, IESLLPOILynxModel, IESLLPoiRankFeedResStruct;

@interface IESLLPOIFeedListResponse : IESLLifeBaseApiModel

@property (copy, nonatomic) NSArray *awemeList;
@property (nonatomic) long long nextCursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *dynamicText;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *removeAwemeID;
@property (copy, nonatomic) NSString *selfPubAwemeCase;
@property (retain, nonatomic) IESLLPOIFeedAwemeResModel *awemeRes;
@property (retain, nonatomic) NSArray *insertLynxCards;
@property (retain, nonatomic) IESLLPOILynxModel *poiFeedFixLayer;
@property (retain, nonatomic) IESLLPoiRankFeedResStruct *poiRankRes;
@property (retain, nonatomic) IESLLPOIFeedApiDuration *feedApiDuration;

+ (id)awemeListJSONTransformer;
+ (id)insertLynxCardsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
