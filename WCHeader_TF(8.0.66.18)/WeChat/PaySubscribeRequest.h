@class BaseRequest, NSString, NSData, ActionLocation;

@interface PaySubscribeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appServiceUserName;
@property (retain, nonatomic) NSString *transactionId;
@property (retain, nonatomic) NSData *reqKey;
@property (nonatomic) int payScene;
@property (nonatomic) int channel;
@property (nonatomic) int subscribeLevel;
@property (retain, nonatomic) ActionLocation *actionLocation;

+ (void)initialize;

@end
