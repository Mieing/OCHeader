@class NSArray, NSNumber, ACCVideoMusicCategoryModel;

@interface ACCVideoMusicListResponse : ACCBaseApiModel

@property (retain, nonatomic) NSArray *mc_list;
@property (retain, nonatomic) NSArray *music_list;
@property (retain, nonatomic) NSArray *media_list;
@property (retain, nonatomic) NSArray *playlistMusics;
@property (retain, nonatomic) NSArray *musicList;
@property (retain, nonatomic) NSArray *mcList;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSNumber *hasMore;
@property (retain, nonatomic) NSNumber *musicType;
@property (retain, nonatomic) ACCVideoMusicCategoryModel *titleModel;

+ (id)titleModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
