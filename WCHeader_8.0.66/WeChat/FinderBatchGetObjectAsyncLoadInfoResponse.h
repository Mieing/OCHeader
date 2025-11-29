@class NSMutableArray, BaseResponse;

@interface FinderBatchGetObjectAsyncLoadInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *objectAsyncInfoMap;
@property (retain, nonatomic) NSMutableArray *contactAsyncInfoMap;
@property (nonatomic) unsigned int objectInfoRefreshIntervalSeconds;
@property (nonatomic) unsigned int liveContactTtlSeconds;
@property (retain, nonatomic) NSMutableArray *newlifeSupportBusinesstype;

+ (void)initialize;

- (void)setNewlifeSupportBusinesstype:(id)a0;
- (id)newlifeSupportBusinesstype;
- (void)setLiveContactTtlSeconds:(unsigned int)a0;
- (unsigned int)liveContactTtlSeconds;
- (void)setObjectInfoRefreshIntervalSeconds:(unsigned int)a0;
- (unsigned int)objectInfoRefreshIntervalSeconds;
- (void)setContactAsyncInfoMap:(id)a0;
- (id)contactAsyncInfoMap;
- (void)setObjectAsyncInfoMap:(id)a0;
- (id)objectAsyncInfoMap;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
