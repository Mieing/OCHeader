@class NSString, NSArray;

@interface AWEPlayTokenAuthModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *auth;
@property (copy, nonatomic) NSString *tvToken;
@property (copy, nonatomic) NSString *playAuthToken;
@property (copy, nonatomic) NSArray *hosts;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
