@class FinderWindowProductInfo, NSString, FinderLiveShopWindowProductItem, BaseResponse;

@interface FinderLiveGetShopProductDetailResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderLiveShopWindowProductItem *productItem;
@property (retain, nonatomic) NSString *shopRequestId;
@property (retain, nonatomic) FinderWindowProductInfo *productInfo;

+ (void)initialize;

@end
