@class BaseRequest;

@interface GetBizLastReadingReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int lastUpdateTime;
@property (nonatomic) unsigned int itemCount;

+ (void)initialize;

@end
