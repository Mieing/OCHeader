@class BaseResponse, NSString, FinderLiveErrorPage, FinderLiveScreenCastInfo;

@interface FinderLiveGetAuthorizationResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) FinderLiveScreenCastInfo *screenCastInfo;
@property (retain, nonatomic) FinderLiveErrorPage *errorPage;
@property (retain, nonatomic) NSString *authCode;

+ (void)initialize;

@end
