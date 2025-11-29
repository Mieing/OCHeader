@class BaseRequest, NSString;

@interface FinderSendInviteMsgRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *fromUsername;
@property (retain, nonatomic) NSString *toUsername;
@property (nonatomic) int scene;
@property (retain, nonatomic) NSString *link;

+ (void)initialize;

@end
