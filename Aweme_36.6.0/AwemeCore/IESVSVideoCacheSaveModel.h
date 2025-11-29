@class NSString, NSArray;

@interface IESVSVideoCacheSaveModel : IESLiveDynamicModel

@property (copy, nonatomic) NSString *videoID;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long episodeId;
@property (nonatomic) long long episodeStage;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSArray *cover;
@property (copy, nonatomic) NSString *currentPeriod;
@property (nonatomic) long long seasonId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *authorId;
@property (nonatomic) long long resolution;
@property (copy, nonatomic) NSString *currentSize;
@property (copy, nonatomic) NSString *totalSize;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *mediaTitle;
@property (nonatomic) long long duration;
@property (nonatomic) BOOL isPortrait;

- (id)videoIdForUidCheckMapperKey;
- (id)initWithVideoID:(id)a0;
- (id)saveKey;
- (void)setValuesWithDict:(id)a0;
- (id)transformToDict;
- (id)initWithAlbumItem:(id)a0;
- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)initWithEpisode:(id)a0;
- (id)saveData;

@end
