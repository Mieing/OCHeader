@class BaseRequest, NSString;

@interface VoteMsgRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *chatroomName;
@property (nonatomic) unsigned long long seq;
@property (nonatomic) BOOL isVote;
@property (nonatomic) BOOL needEducation;

+ (void)initialize;

@end
