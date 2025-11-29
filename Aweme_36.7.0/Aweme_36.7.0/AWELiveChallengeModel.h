@class NSString;

@interface AWELiveChallengeModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *challengeID;
@property (copy, nonatomic) NSString *challengeName;
@property (nonatomic) BOOL isCommerce;

+ (id)parseChallengeModelFromJson:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
