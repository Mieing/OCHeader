@class BaseRequest, NSString, ActionLocation;

@interface OfflinePayConfirmRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int buttonType;
@property (retain, nonatomic) NSString *id;
@property (retain, nonatomic) NSString *passwd;
@property (retain, nonatomic) ActionLocation *actionLocation;

+ (void)initialize;

@end
