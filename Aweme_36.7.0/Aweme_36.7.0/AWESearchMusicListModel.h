@class NSArray, AWESearchMusicPlayListInfoModel, AWESearchMusicPlayListSearchInfoModel;

@interface AWESearchMusicListModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *mediaList;
@property (copy, nonatomic) NSArray *searchBackgroundConfig;
@property (copy, nonatomic) AWESearchMusicPlayListInfoModel *playListInfo;
@property (copy, nonatomic) AWESearchMusicPlayListSearchInfoModel *playListSearchInfo;
@property (retain, nonatomic) NSArray *musicList;

+ (id)mediaListJSONTransformer;
+ (id)playListInfoJSONTransformer;
+ (id)playListSearchInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
