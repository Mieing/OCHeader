@interface TPVCodecCapabilityForGet : NSObject

@property (nonatomic) long long maxLumaSamples;
@property (nonatomic) long long maxProfile;
@property (nonatomic) long long maxLevel;
@property (nonatomic) long long framerate;

- (id)initWithMaxlumaSamples:(long long)a0 maxProfile:(long long)a1 maxLevel:(long long)a2 framerate:(long long)a3;

@end
