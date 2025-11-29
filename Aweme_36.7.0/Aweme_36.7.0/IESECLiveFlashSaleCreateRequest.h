@class NSString, NSDictionary, NSArray, NSNumber;

@interface IESECLiveFlashSaleCreateRequest : NSObject

@property (copy, nonatomic) NSString *roomID;
@property (nonatomic) double price;
@property (copy, nonatomic) NSString *stock;
@property (copy, nonatomic) NSString *note;
@property (copy, nonatomic) NSString *cover;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *targetUID;
@property (copy, nonatomic) NSString *categoryIDs;
@property (copy, nonatomic) NSDictionary *properties;
@property (copy, nonatomic) NSString *skuBarcode;
@property (nonatomic) long long skuState;
@property (nonatomic) long long stockReductionType;
@property (nonatomic) BOOL supportDeposit;
@property (retain, nonatomic) NSNumber *depositCustomTime;
@property (nonatomic) long long depositDeliveryDelayTime;
@property (nonatomic) long long depositPrice;
@property (copy, nonatomic) NSArray *privileges;
@property (copy, nonatomic) NSString *refund;
@property (retain, nonatomic) NSNumber *deliveryDelayTime;

- (id)buildParams;
- (void).cxx_destruct;

@end
