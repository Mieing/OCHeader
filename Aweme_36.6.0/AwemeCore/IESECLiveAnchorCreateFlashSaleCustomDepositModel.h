@class NSNumber, NSArray, NSString;

@interface IESECLiveAnchorCreateFlashSaleCustomDepositModel : IESECLiveApiBaseModel

@property (copy, nonatomic) NSNumber *minCustomTime;
@property (copy, nonatomic) NSNumber *maxCustomTime;
@property (copy, nonatomic) NSArray *deliveryDelayTimeRange;
@property (nonatomic) BOOL support;
@property (nonatomic) BOOL isJewelryCustom;
@property (nonatomic) BOOL isJadeCustom;
@property (retain, nonatomic) NSString *hintString;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
