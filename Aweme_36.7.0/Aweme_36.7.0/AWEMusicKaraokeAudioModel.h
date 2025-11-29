@class NSString, AWEURLModel;

@interface AWEMusicKaraokeAudioModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double volumeLoudness;
@property (nonatomic) double volumePeak;
@property (nonatomic) long long playURLStart;
@property (retain, nonatomic) AWEURLModel *playURL;
@property (nonatomic) long long playURLDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)playURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
