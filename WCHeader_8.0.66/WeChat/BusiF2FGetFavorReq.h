@class BaseRequest, NSString, NSMutableArray;

@interface BusiF2FGetFavorReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int amount;
@property (nonatomic) unsigned int channel;
@property (nonatomic) unsigned int scanScene;
@property (retain, nonatomic) NSString *receiverDesc;
@property (retain, nonatomic) NSString *mchName;
@property (retain, nonatomic) NSString *favorReqSign;
@property (retain, nonatomic) NSString *receiverOpenid;
@property (retain, nonatomic) NSString *receiverUsername;
@property (retain, nonatomic) NSString *favorReqExtend;
@property (nonatomic) unsigned int failClickCell;
@property (nonatomic) unsigned int originAmount;
@property (retain, nonatomic) NSMutableArray *extraBuyDetailInfos;

+ (void)initialize;

@end
