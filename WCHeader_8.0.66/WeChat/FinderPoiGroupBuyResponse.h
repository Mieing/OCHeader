@class NSString, NSMutableArray, BaseResponse;

@interface FinderPoiGroupBuyResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *poiGroupBuyCouponList;
@property (retain, nonatomic) NSString *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSString *footerWording;

+ (void)initialize;

@end
