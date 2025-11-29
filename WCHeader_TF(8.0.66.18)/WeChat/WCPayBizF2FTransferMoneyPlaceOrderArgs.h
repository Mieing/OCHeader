@class NSString, FavorComposeInfo, NSMutableArray;

@interface WCPayBizF2FTransferMoneyPlaceOrderArgs : NSObject

@property (nonatomic) unsigned int originalAmount;
@property (nonatomic) unsigned int totalAmount;
@property (retain, nonatomic) NSString *payerComment;
@property (retain, nonatomic) FavorComposeInfo *favorComposeInfo;
@property (retain, nonatomic) NSMutableArray *extraBuyDetailInfos;

- (void).cxx_destruct;

@end
