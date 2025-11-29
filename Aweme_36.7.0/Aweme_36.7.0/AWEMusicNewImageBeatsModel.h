@class AWENewURLModel, NSString;

@interface AWEMusicNewImageBeatsModel : AWEBaseDataModel

@property (retain, nonatomic) AWENewURLModel *musicImageBeatsUrl;
@property (copy, nonatomic) NSString *musicImageBeatsRaw;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
