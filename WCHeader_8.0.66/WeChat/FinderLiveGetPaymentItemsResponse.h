@class NSString, NSMutableArray, BaseResponse;

@interface FinderLiveGetPaymentItemsResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *productList;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned int livingTime;

+ (void)initialize;

@end
