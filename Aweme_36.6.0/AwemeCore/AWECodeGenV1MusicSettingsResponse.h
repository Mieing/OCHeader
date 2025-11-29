@class AWECodeGenMusicDiversionConfigModel;

@interface AWECodeGenV1MusicSettingsResponse : AWEBaseResponseModel

@property (retain, nonatomic) AWECodeGenMusicDiversionConfigModel *musicDiversionConfigModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
