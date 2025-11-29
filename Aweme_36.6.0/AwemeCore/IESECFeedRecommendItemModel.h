@class NSString, IESECFeedLiveRecommendModel, IESECVideoRecommendModel, IESECAuthorRecommendModel, IESECFeedRankingModel, IESECFeedResourceCardModel, NSArray, IESECFeedRecommendExtraModel, NSDictionary, IESECFeedRecommendProductWrapperModel, NSNumber;

@interface IESECFeedRecommendItemModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *ID;
@property (nonatomic) long long type;
@property (retain, nonatomic) IESECFeedLiveRecommendModel *live;
@property (retain, nonatomic) IESECVideoRecommendModel *video;
@property (retain, nonatomic) IESECAuthorRecommendModel *user;
@property (retain, nonatomic) IESECFeedRankingModel *ranking;
@property (retain, nonatomic) IESECFeedResourceCardModel *resourceCardModel;
@property (copy, nonatomic) NSString *resourceBarData;
@property (copy, nonatomic) NSString *parentProductId;
@property (retain, nonatomic) IESECFeedRecommendProductWrapperModel *productWrapper;
@property (retain, nonatomic) NSArray *products;
@property (retain, nonatomic) IESECFeedRecommendExtraModel *extraData;
@property (copy, nonatomic) NSString *requestLogID;
@property (retain, nonatomic) NSDictionary *Ad;
@property (copy, nonatomic) NSString *AdLogExtra;
@property (retain, nonatomic) NSNumber *AdCID;
@property (copy, nonatomic) NSString *AdOpenURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)productsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
