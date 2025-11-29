@class BaseRequest, NSString;

@interface IBeaconBoardcastRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *bizUsername;
@property (retain, nonatomic) NSString *content;

+ (void)initialize;

@end
