@class NSString, NSNumber, AWEMusicURLModel;

@interface AWEMusicAudioBitRateModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *gearName;
@property (nonatomic) long long qualityType;
@property (retain, nonatomic) NSNumber *bitRate;
@property (retain, nonatomic) AWEMusicURLModel *playAddr;

+ (id)playAddrJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
