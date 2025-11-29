@class InteractionCommResp, BaseResponse;

@interface FinderLikeResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long likeid;
@property (retain, nonatomic) InteractionCommResp *interactionCommResp;

+ (void)initialize;

@end
