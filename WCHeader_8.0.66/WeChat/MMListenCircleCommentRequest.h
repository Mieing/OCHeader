@class BaseRequest, NSString;

@interface MMListenCircleCommentRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) unsigned long long replyCommentId;
@property (nonatomic) BOOL isCancel;
@property (nonatomic) unsigned long long feedId;
@property (nonatomic) unsigned long long commentIdToCancel;

+ (void)initialize;

@end
