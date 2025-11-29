@class InteractionCommResp, BaseResponse;

@interface FinderFavResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) InteractionCommResp *interactionCommResp;

+ (void)initialize;

@end
