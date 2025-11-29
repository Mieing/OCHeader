@class BaseRequest, NSString;

@interface MMListenCommentRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *listenId;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *commentContent;
@property (nonatomic) int time;

+ (void)initialize;

@end
