@class SnsADObject, BaseResponse, SnsRecommendObject, AdvertiseObject, SKBuiltinBuffer_t;

@interface SnsADObjectDetailResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SnsADObject *object;
@property (retain, nonatomic) SKBuiltinBuffer_t *session;
@property (retain, nonatomic) SnsRecommendObject *snsRecommendObject;
@property (retain, nonatomic) SKBuiltinBuffer_t *adDynamicInfoBuffer;
@property (retain, nonatomic) AdvertiseObject *remindAdobject;

+ (void)initialize;

- (void)setRemindAdobject:(id)a0;
- (id)remindAdobject;
- (void)setAdDynamicInfoBuffer:(id)a0;
- (id)adDynamicInfoBuffer;
- (void)setSnsRecommendObject:(id)a0;
- (id)snsRecommendObject;
- (void)setSession:(id)a0;
- (id)session;
- (void)setObject:(id)a0;
- (id)object;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
