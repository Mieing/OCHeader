@class NSString;

@interface IESECGoodsShopGuideResponse : IESECBaseApiModel

@property (copy, nonatomic) NSString *shopGuideId;
@property (nonatomic) BOOL isShopGuide;
@property (copy, nonatomic) NSString *toastMsg;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
