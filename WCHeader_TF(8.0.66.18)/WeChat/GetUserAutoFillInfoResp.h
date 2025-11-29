@class NSString, NSMutableArray, BaseResponse;

@interface GetUserAutoFillInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *userInfoJson;
@property (nonatomic) unsigned int authStatus;
@property (retain, nonatomic) NSString *authInfo;
@property (retain, nonatomic) NSMutableArray *authGroupList;

+ (void)initialize;

@end
