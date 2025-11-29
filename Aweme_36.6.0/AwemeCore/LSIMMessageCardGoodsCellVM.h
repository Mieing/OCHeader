@class NSString, NSDictionary;

@interface LSIMMessageCardGoodsCellVM : LSIMMessageCardBaseCellVM

@property (nonatomic) BOOL alreadyBindCardBody;
@property (copy, nonatomic) NSString *productName;
@property (copy, nonatomic) NSString *productURL;
@property (copy, nonatomic) NSString *soldQuantity;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *actualAmount;
@property (copy, nonatomic) NSString *imageURI;
@property (copy, nonatomic) NSDictionary *appletProduct;
@property (readonly, copy, nonatomic) NSString *actualAmountString;
@property (readonly, copy, nonatomic) NSString *soldQuantityUseString;

- (BOOL)needRequestNewData;
- (void)handleMessage;
- (void)containerDidTapped;
- (BOOL)hasSendMethod;
- (unsigned long long)fetchCardType;
- (id)fetchCardID;
- (id)fetchAppletExtParams;
- (void)bindCardBody;
- (void)handleCardBodyChanged;
- (void).cxx_destruct;

@end
