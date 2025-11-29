@class BaseRequest, NSString, NSMutableArray;

@interface F2FInviteRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *fromUser;
@property (retain, nonatomic) NSString *toUser;
@property (nonatomic) unsigned int inviteId;
@property (retain, nonatomic) NSMutableArray *xchgList;
@property (nonatomic) int type;

+ (void)initialize;

@end
