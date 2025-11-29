@class NSString;

@interface WCCardAvailableSeed : MMObject

@property (retain, nonatomic) NSString *appID;
@property (nonatomic) unsigned int shopID;
@property (nonatomic) unsigned int canMultiSelect;
@property (retain, nonatomic) NSString *cardType;
@property (retain, nonatomic) NSString *cardTpID;
@property (retain, nonatomic) NSString *signType;
@property (retain, nonatomic) NSString *cardSign;
@property (nonatomic) unsigned int timeStamp;
@property (retain, nonatomic) NSString *nonceStr;
@property (nonatomic) unsigned int onlyInvoice;

- (void).cxx_destruct;

@end
