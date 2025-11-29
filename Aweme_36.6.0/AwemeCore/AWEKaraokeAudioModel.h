@class AWENewURLModel;

@interface AWEKaraokeAudioModel : AWEBaseDataModel

@property (nonatomic) double volumeLoudness;
@property (nonatomic) double volumePeak;
@property (nonatomic) int playURLStart;
@property (retain, nonatomic) AWENewURLModel *playURL;
@property (nonatomic) int playURLDuration;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
