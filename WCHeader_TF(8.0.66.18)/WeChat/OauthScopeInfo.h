@class NSString;

@interface OauthScopeInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *scope;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) unsigned int authState;
@property (retain, nonatomic) NSString *authSubDesc;

+ (void)initialize;

@end
