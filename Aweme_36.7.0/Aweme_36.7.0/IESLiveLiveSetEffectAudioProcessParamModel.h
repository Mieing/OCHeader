@class NSNumber, NSString;

@interface IESLiveLiveSetEffectAudioProcessParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *enable;
@property (copy, nonatomic) NSString *stickerId;
@property (retain, nonatomic) NSNumber *cover;
@property (copy, nonatomic) NSString *filePath;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
