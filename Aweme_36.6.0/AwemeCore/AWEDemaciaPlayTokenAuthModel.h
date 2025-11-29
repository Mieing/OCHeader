@class NSString, NSArray;

@interface AWEDemaciaPlayTokenAuthModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *auth;
@property (copy, nonatomic) NSString *tvToken;
@property (copy, nonatomic) NSArray *hosts;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
