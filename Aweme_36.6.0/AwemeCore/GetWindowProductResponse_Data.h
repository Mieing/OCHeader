@class NSString, NSMutableArray;

@interface GetWindowProductResponse_Data : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *imgURLListArray;
@property (readonly, nonatomic) unsigned long long imgURLListArray_Count;
@property (nonatomic) long long price;
@property (nonatomic) long long sellNum;
@property (nonatomic) int status;
@property (nonatomic) long long marketPrice;
@property (nonatomic) int stockStatus;
@property (copy, nonatomic) NSString *priceHeader;
@property (copy, nonatomic) NSString *shortTitle;
@property (copy, nonatomic) NSString *middleTitle;
@property (copy, nonatomic) NSString *saleText;
@property (copy, nonatomic) NSString *schema;

+ (id)descriptor;

@end
