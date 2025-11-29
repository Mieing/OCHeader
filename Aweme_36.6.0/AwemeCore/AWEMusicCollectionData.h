@class AWEDynamicPatchModel, NSArray, ACCMusicUIThemeModel, ACCMusicPlaylistModel, ACCMusicCollectionFeedModel;
@protocol ACCMusicModelProtocol, ACCSearchMusicRecommendedVideosModelProtocol;

@interface AWEMusicCollectionData : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *categoryList;
@property (copy, nonatomic) id<ACCMusicModelProtocol> music;
@property (copy, nonatomic) NSArray *videoMusicList;
@property (retain, nonatomic) ACCMusicCollectionFeedModel *collectionFeed;
@property (copy, nonatomic) NSArray *musicList;
@property (retain, nonatomic) AWEDynamicPatchModel *dynamicPatchModel;
@property (retain, nonatomic) id<ACCSearchMusicRecommendedVideosModelProtocol> recommendModel;
@property (retain, nonatomic) ACCMusicPlaylistModel *playlistModel;
@property (retain, nonatomic) NSArray *chartList;
@property (retain, nonatomic) ACCMusicUIThemeModel *themeModel;

- (id)initWithMusicModel:(id)a0 withType:(unsigned long long)a1;
- (id)initWithMusicArray:(id)a0;
- (id)initWithCategoryArray:(id)a0;
- (id)initWithMusicCollectionFeedModel:(id)a0;
- (id)initWithDynamicModel:(id)a0;
- (id)initWithRecommendedVideosModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;

@end
