@class NSString;

@interface AWEKaraokeEffectEditViewModel : NSObject

@property (nonatomic) BOOL useRecommendVolume;
@property (nonatomic) double vocalVolume;
@property (nonatomic) double bgmVolume;
@property (nonatomic) double vocalAlign;
@property (copy, nonatomic) NSString *selectedEffectID;

- (void).cxx_destruct;

@end
