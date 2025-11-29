@class BaseRequest, NSString;

@interface BanLiveCommentRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *roomId;
@property (nonatomic) BOOL enableComment;

+ (void)initialize;

@end
