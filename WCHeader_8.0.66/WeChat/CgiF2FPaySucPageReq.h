@class BaseRequest, NSString;

@interface CgiF2FPaySucPageReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *f2FId;
@property (retain, nonatomic) NSString *transId;
@property (nonatomic) unsigned int amount;
@property (retain, nonatomic) NSString *payerDesc;
@property (retain, nonatomic) NSString *rcvrDesc;
@property (nonatomic) int channel;
@property (nonatomic) unsigned int scanScene;
@property (retain, nonatomic) NSString *placeorderSucSign;
@property (retain, nonatomic) NSString *paySucExtend;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
