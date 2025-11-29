@class NSString, AWEDTOLoudnessEqualizationModel;

@interface AWEDTOAudioAlgorithmModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEDTOLoudnessEqualizationModel *voiceLEModel;
@property (retain, nonatomic) AWEDTOLoudnessEqualizationModel *bgmLEModel;
@property (nonatomic) long long recordBgmDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)voiceLEModelJSONTransformer;
+ (id)bgmLEModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
