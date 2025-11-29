@class NSNumber, NSArray;

@interface AWEPlaylistDeleteAndSongAddorDeleteResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *count;
@property (retain, nonatomic) NSArray *existMusicIds;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
