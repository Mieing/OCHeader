@class NSString, IESECGoodsDetailModel;

@interface IESECFeedRecommendProductWrapperModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *promotionID;
@property (retain, nonatomic) IESECGoodsDetailModel *promotion;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *recommendInfo;
@property (copy, nonatomic) NSString *recommendReason;
@property (copy, nonatomic) NSString *coverTag;
@property (nonatomic) BOOL IsCurrentInLive;
@property (copy, nonatomic) NSString *priceBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
