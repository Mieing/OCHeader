@class NSMutableArray, BaseResponse;

@interface FinderBatchGetObjectAsyncLoadInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *objectAsyncInfoMap;
@property (retain, nonatomic) NSMutableArray *contactAsyncInfoMap;
@property (nonatomic) unsigned int objectInfoRefreshIntervalSeconds;
@property (nonatomic) unsigned int liveContactTtlSeconds;
@property (retain, nonatomic) NSMutableArray *newlifeSupportBusinesstype;

+ (void)initialize;

@end
