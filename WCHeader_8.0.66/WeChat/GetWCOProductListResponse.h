@class NSString, NSMutableArray, BaseResponse;

@interface GetWCOProductListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int cellCount;
@property (retain, nonatomic) NSMutableArray *cellList;
@property (retain, nonatomic) NSString *lastProductId;
@property (retain, nonatomic) NSString *callCountry;
@property (nonatomic) int isAllowChangeCurrency;
@property (retain, nonatomic) NSString *currentCurrency;
@property (retain, nonatomic) NSString *alertTitle;
@property (retain, nonatomic) NSString *alertDesc;

+ (void)initialize;

@end
