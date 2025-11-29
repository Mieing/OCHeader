@class NSString, NSArray;

@interface AWECommentAudioModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *audioFilePath;
@property (copy, nonatomic) NSString *vID;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *wave;
@property (nonatomic) long long duration;
@property (copy, nonatomic) NSArray *waveArr;
@property (copy, nonatomic) NSArray *waveHeightArr;
@property (nonatomic) double currentTime;
@property (nonatomic) double commentAudioDurationAnchor;
@property (nonatomic) double commentAudioDurationDiff;
@property (nonatomic) unsigned long long audioStatus;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
