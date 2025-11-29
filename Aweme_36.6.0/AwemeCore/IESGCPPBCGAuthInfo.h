@class NSString;

@interface IESGCPPBCGAuthInfo : GPBMessage

@property (nonatomic) BOOL isAuth;
@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSString *scopes;

+ (id)descriptor;

@end
