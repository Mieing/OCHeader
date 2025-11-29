@class NSString, NSMutableArray, BaseResponse;

@interface GetUserAutoFillInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *userInfoJson;
@property (nonatomic) unsigned int authStatus;
@property (retain, nonatomic) NSString *authInfo;
@property (retain, nonatomic) NSMutableArray *authGroupList;

+ (void)initialize;

- (void)setAuthGroupList:(id)a0;
- (id)authGroupList;
- (void)setAuthInfo:(id)a0;
- (id)authInfo;
- (void)setAuthStatus:(unsigned int)a0;
- (unsigned int)authStatus;
- (void)setUserInfoJson:(id)a0;
- (id)userInfoJson;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
