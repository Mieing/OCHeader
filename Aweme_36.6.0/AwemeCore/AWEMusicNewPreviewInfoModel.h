@class AWENewURLModel;

@interface AWEMusicNewPreviewInfoModel : AWEBaseDataModel

@property (nonatomic) long long start_ms;
@property (nonatomic) long long duration_ms;
@property (retain, nonatomic) AWENewURLModel *fullPlayURL;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
