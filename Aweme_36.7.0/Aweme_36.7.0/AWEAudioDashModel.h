@class NSNumber, NSDictionary, NSString;

@interface AWEAudioDashModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *audioQuality;
@property (copy, nonatomic) NSDictionary *audioMetaInfo;
@property (copy, nonatomic) NSString *audioExtra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
