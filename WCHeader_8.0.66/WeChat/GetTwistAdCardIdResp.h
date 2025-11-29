@class NSString, TwistExtinfo, BaseResponse;

@interface GetTwistAdCardIdResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *cardId;
@property (retain, nonatomic) NSString *snsId;
@property (retain, nonatomic) TwistExtinfo *twistExtinfo;

+ (void)initialize;

@end
