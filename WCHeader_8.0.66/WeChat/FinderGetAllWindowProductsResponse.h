@class NSData, NSMutableArray, BaseResponse;

@interface FinderGetAllWindowProductsResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *products;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (nonatomic) unsigned int showShopOpGuide;

+ (void)initialize;

@end
