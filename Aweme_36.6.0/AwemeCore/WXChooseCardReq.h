@class NSString;

@interface WXChooseCardReq : BaseReq

@property (copy, nonatomic) NSString *appID;
@property (nonatomic) unsigned int shopID;
@property (nonatomic) unsigned int canMultiSelect;
@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSString *cardTpID;
@property (copy, nonatomic) NSString *signType;
@property (copy, nonatomic) NSString *cardSign;
@property (nonatomic) unsigned int timeStamp;
@property (copy, nonatomic) NSString *nonceStr;

- (void).cxx_destruct;

@end
