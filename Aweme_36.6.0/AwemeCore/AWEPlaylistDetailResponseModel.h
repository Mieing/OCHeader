@class NSArray, AWEPlaylistInfoModel, NSString, NSNumber;

@interface AWEPlaylistDetailResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEPlaylistInfoModel *playlistInfo;
@property (retain, nonatomic) NSArray *mediaList;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *playlistExtra;

+ (id)playlistInfoJSONTransformer;
+ (id)mediaListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
