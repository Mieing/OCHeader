@class BaseRequest, NSString;

@interface TransToBankCardPayReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *bankCardSeqno;
@property (retain, nonatomic) NSString *bankCardTailno;
@property (retain, nonatomic) NSString *bankType;
@property (nonatomic) unsigned int enterTimeScene;
@property (nonatomic) unsigned int transferAmt;
@property (retain, nonatomic) NSString *transferExplain;
@property (nonatomic) unsigned int poundage;
@property (nonatomic) unsigned int inputType;
@property (retain, nonatomic) NSString *encryptData;
@property (retain, nonatomic) NSString *uniqueId;
@property (retain, nonatomic) NSString *lastTransferBillId;
@property (nonatomic) unsigned int unpayType;

+ (void)initialize;

@end
