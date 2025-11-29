@class NSArray, NSString, NSNumber;

@interface AWEMiniLunaGetPlaylistsResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *playlists;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *cursor;
@property (retain, nonatomic) NSNumber *totalNumber;

+ (id)playlistsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
