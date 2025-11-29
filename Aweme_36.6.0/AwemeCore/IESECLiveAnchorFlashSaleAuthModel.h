@class NSNumber, NSString, NSDictionary;

@interface IESECLiveAnchorFlashSaleAuthModel : IESECLiveApiBaseModel

@property (retain, nonatomic) NSNumber *isAuth;
@property (nonatomic) BOOL isOpen;
@property (copy, nonatomic) NSString *shopID;
@property (copy, nonatomic) NSString *lastCategoryName;
@property (copy, nonatomic) NSString *lastCategoryCids;
@property (nonatomic) BOOL purchaseReturn;
@property (copy, nonatomic) NSDictionary *lastProperties;
@property (nonatomic) BOOL skuAuth;
@property (retain, nonatomic) NSNumber *lastSKUState;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
