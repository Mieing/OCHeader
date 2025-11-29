@class NSString;

@interface AWEAIGCUGCFusionVideoReferenceConfigModel : AWEBaseSettingsModel

@property (nonatomic) BOOL enable;
@property (nonatomic) long long maxVideoDuration;
@property (nonatomic) long long minVideoDuration;
@property (nonatomic) long long maxFragmentDuration;
@property (nonatomic) long long minFragmentDuration;
@property (nonatomic) long long frameCntPerSecond;
@property (nonatomic) double peopleFrameRatio;
@property (copy, nonatomic) NSString *albumBottomLegalText;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
