@class BaseRequest;

@interface GetMemberCardHistoryRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long pageNum;
@property (nonatomic) unsigned long long pageSize;

+ (void)initialize;

@end
