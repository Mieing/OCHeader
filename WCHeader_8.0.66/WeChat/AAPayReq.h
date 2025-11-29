@class BaseRequest, NSString;

@interface AAPayReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *billNo;
@property (nonatomic) unsigned long long payAmount;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *groupid;
@property (retain, nonatomic) NSString *payReason;
@property (retain, nonatomic) NSString *solitaireContent;

+ (void)initialize;

@end
