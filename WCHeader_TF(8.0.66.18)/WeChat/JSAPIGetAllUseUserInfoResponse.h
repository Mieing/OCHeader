@class NSString, NSMutableArray, BaseResponse;

@interface JSAPIGetAllUseUserInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSMutableArray *authScopeItemList;
@property (retain, nonatomic) NSMutableArray *privacyScopeItemList;

+ (void)initialize;

@end
