@class NSString, NSDictionary;

@interface AWEMusicFeedETModel : MTLModel <NSCopying>

@property (nonatomic) BOOL isPlaylistScene;
@property (copy, nonatomic) NSString *authorId;
@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSString *songGroupId;
@property (copy, nonatomic) NSString *playlistID;
@property (nonatomic) BOOL hasLyrics;
@property (nonatomic) BOOL isVideo;
@property (copy, nonatomic) NSString *mediaType;
@property (copy, nonatomic) NSString *metaSongId;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (nonatomic) double playedDuration;
@property (copy, nonatomic) NSString *queueName;
@property (copy, nonatomic) NSString *queueType;
@property (copy, nonatomic) NSString *sceneName;
@property (copy, nonatomic) NSString *sourceType;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *requestId;
@property (copy, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSString *groupType;
@property (copy, nonatomic) NSString *fromGroupId;
@property (copy, nonatomic) NSString *fromGroupType;
@property (copy, nonatomic) NSString *artistId;

+ (id)encodingBehaviorsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
