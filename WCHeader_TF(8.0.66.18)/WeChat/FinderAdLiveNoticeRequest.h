@class BaseRequest, NSString;

@interface FinderAdLiveNoticeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *noticeId;
@property (retain, nonatomic) NSString *finderUsername;

+ (void)initialize;

@end
