@class NSString, NSArray;

@interface AWEDTOVoiceChangeModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *voiceChangerId;
@property (copy, nonatomic) NSString *challengeId;
@property (copy, nonatomic) NSString *challengeName;
@property (copy, nonatomic) NSArray *voiceEffects;
@property (nonatomic) long long isVoiceConversion;
@property (copy, nonatomic) NSString *voiceConversionSpeakerId;
@property (copy, nonatomic) NSArray *voiceConversionAudioPaths;
@property (copy, nonatomic) NSArray *voiceConversionPlayRanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)voiceEffectsJSONTransformer;
+ (id)voiceConversionPlayRangesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
