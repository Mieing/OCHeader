@class BaseRequest, NSString;

@interface PurchaseFromBankGuideReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int clickState;
@property (nonatomic) unsigned int showingState;
@property (retain, nonatomic) NSString *traceInfo;

+ (void)initialize;

@end
