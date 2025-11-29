@class NSString, NSArray;

@interface AWEVideoDraftVoiceChangerModel : NSObject <NSCoding>

@property (copy, nonatomic) NSString *voiceChangerChallengeID;
@property (copy, nonatomic) NSString *voiceChangerChallengeName;
@property (copy, nonatomic) NSArray *voiceEffectSegments;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
