@class NSArray, NSString;

@interface IESCompositionInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *compositionTracks;
@property (copy, nonatomic) NSArray *audioMixTracks;
@property (copy, nonatomic) NSArray *videoCompositionStages;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)compositionTracksJSONTransformer;
+ (id)videoCompositionStagesJSONTransformer;
+ (id)audioMixTracksJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)durationJSONTransformer;

- (void)synchronizeToComposition:(id)a0 videoComposition:(id)a1 audioMix:(id)a2;
- (void).cxx_destruct;

@end
