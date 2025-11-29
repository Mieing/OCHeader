@class SnsADObject, SnsRecommendObject, BaseResponse;

@interface SnsADCommentResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SnsADObject *snsAdobject;
@property (retain, nonatomic) SnsRecommendObject *snsRecommendObject;

+ (void)initialize;

@end
