@class NSString, NSNumber;

@interface LSIMMessageCardOrderCellVM : LSIMMessageCardBaseCellVM

@property (nonatomic) BOOL alreadyBindCardBody;
@property (copy, nonatomic) NSString *orderID;
@property (copy, nonatomic) NSString *productName;
@property (copy, nonatomic) NSString *productURL;
@property (copy, nonatomic) NSString *imageURI;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *payAmount;
@property (copy, nonatomic) NSNumber *couponCount;
@property (nonatomic) double orderTime;
@property (copy, nonatomic) NSString *orderStatus;
@property (readonly, copy, nonatomic) NSString *payAmountString;
@property (readonly, copy, nonatomic) NSString *couponCountString;
@property (readonly, copy, nonatomic) NSString *orederTimeString;

- (BOOL)needRequestNewData;
- (void)handleMessage;
- (void)containerDidTapped;
- (BOOL)hasSendMethod;
- (unsigned long long)fetchCardType;
- (id)fetchCardID;
- (void)bindCardBody;
- (void)handleCardBodyChanged;
- (void).cxx_destruct;

@end
