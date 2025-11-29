@class NSArray, NSNumber;

@interface AWEPlaylistListResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *playlistInfo;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cursor;
@property (nonatomic) unsigned long long playlistType;
@property (retain, nonatomic) NSNumber *totalCount;

+ (id)playlistInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
