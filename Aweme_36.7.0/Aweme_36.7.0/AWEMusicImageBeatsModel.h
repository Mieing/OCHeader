@class NSString, AWEURLModel;

@interface AWEMusicImageBeatsModel : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *musicImageBeatsUrl;
@property (copy, nonatomic) NSString *musicImageBeatsRaw;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
