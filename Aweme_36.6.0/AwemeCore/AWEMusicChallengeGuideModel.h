@class NSString;

@interface AWEMusicChallengeGuideModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *challengeName;
@property (copy, nonatomic) NSString *profileImage;
@property (copy, nonatomic) NSString *guideDesc;
@property (copy, nonatomic) NSString *openUrl;
@property (copy, nonatomic) NSString *challengeID;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
