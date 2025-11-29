@class BaseRequest, NSString;

@interface DeleteCardInTicketListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *userCardId;

+ (void)initialize;

@end
