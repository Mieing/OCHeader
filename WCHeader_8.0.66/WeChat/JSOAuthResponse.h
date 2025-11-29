@class NSString, NSMutableArray, BaseResponse;

@interface JSOAuthResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int scopeCount;
@property (retain, nonatomic) NSMutableArray *scopeList;
@property (retain, nonatomic) NSString *oauthTitle;

+ (void)initialize;

@end
