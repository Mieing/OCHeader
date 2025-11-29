@class NSString, FavorComposeInfo, NSMutableArray;

@interface AfterPlaceOrderCommReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *f2FId;
@property (retain, nonatomic) NSString *transId;
@property (nonatomic) unsigned int channel;
@property (nonatomic) unsigned int scanScene;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *payokChecksign;
@property (retain, nonatomic) FavorComposeInfo *favorComposeInfo;
@property (retain, nonatomic) NSString *receiverUsername;
@property (retain, nonatomic) NSString *receiverOpenid;
@property (nonatomic) unsigned int totalAmount;
@property (retain, nonatomic) NSMutableArray *extraBuyDetailInfos;

+ (void)initialize;

@end
