@class NSString;

@interface IESECGoodsRecommendDataControllerInputParams : NSObject

@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *shopID;
@property (copy, nonatomic) NSString *ecomSceneID;
@property (copy, nonatomic) NSString *detailEnterFrom;
@property (nonatomic) BOOL fromLive;
@property (nonatomic) BOOL isInvalidProduct;
@property (copy, nonatomic) NSString *pdpSessionID;

- (void).cxx_destruct;

@end
