@class BaseRequest, NSString;

@interface SetChatroomMsgChosenRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *chatroomName;
@property (nonatomic) unsigned long long seq;
@property (nonatomic) BOOL isChosen;

+ (void)initialize;

@end
