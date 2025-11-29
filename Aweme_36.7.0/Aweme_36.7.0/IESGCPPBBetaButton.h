@class NSString;

@interface IESGCPPBBetaButton : GPBMessage

@property (copy, nonatomic) NSString *schema;
@property (nonatomic) int supportPlatforms;
@property (copy, nonatomic) NSString *betaDetailURL;
@property (copy, nonatomic) NSString *applyURL;

+ (id)descriptor;

@end
