@class BaseRequest, NSString, NSMutableArray;

@interface InitiateBizChatReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *corpId;
@property (retain, nonatomic) NSString *bizchatName;
@property (retain, nonatomic) NSMutableArray *userIdItem;

+ (void)initialize;

@end
