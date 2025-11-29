@class NSNumber, NSString, NSArray, IESECLiveReplayAuthorNormalModel, IESECLiveImageURLModel, NSDictionary, IESECLiveGoodsReplayCardListModel, IESECLiveGoodsModel, IESECLiveGoodsReplayVideoModel;

@interface IESECLiveGoodsReplayNewModel : IESECLiveApiBaseModel

@property (retain, nonatomic) IESECLiveGoodsModel *goodsModel;
@property (nonatomic) long long commentaryType;
@property (copy, nonatomic) NSArray *campaigns;
@property (retain, nonatomic) IESECLiveGoodsReplayVideoModel *video;
@property (copy, nonatomic) NSDictionary *videoMbr;
@property (retain, nonatomic) IESECLiveImageURLModel *bgPic;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *liveHintText;
@property (nonatomic) long long showProductDetailPage;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSNumber *roomID;
@property (copy, nonatomic) NSString *roomSchema;
@property (nonatomic) long long liveStatus;
@property (copy, nonatomic) NSArray *replayRitTags;
@property (retain, nonatomic) IESECLiveGoodsReplayCardListModel *replayCardList;
@property (copy, nonatomic) NSString *roomTitle;
@property (retain, nonatomic) IESECLiveReplayAuthorNormalModel *authorInfo;
@property (copy, nonatomic) NSString *replatViewCntInfo;
@property (nonatomic) long long replatViewCnt;
@property (copy, nonatomic) NSString *roomSchemaV2;
@property (nonatomic) BOOL showCart;
@property (retain, nonatomic) NSNumber *serverTime;

+ (id)goodsModelJSONTransformer;
+ (id)campaignsJSONTransformer;
+ (id)replayRitTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
