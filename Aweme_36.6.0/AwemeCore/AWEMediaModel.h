@class AWEMusicMediaModel, NSString, AWEMusicModel, AWEAwemeModel, NSNumber, AWEMediaSongInfoModel;

@interface AWEMediaModel : AWEBaseApiModel

@property (retain, nonatomic, getter=isFold) NSNumber *fold;
@property (retain, nonatomic, getter=isCooperation) NSNumber *cooperation;
@property (nonatomic) long long mediaType;
@property (nonatomic) long long mediaSource;
@property (retain, nonatomic) AWEMusicModel *musicModel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEMusicMediaModel *musicMediaModel;
@property (retain, nonatomic) AWEMediaSongInfoModel *songInfoModel;
@property (retain, nonatomic) NSString *uniqueId;
@property (retain, nonatomic) NSString *sourceQueue;
@property (retain, nonatomic) NSNumber *originalMusicId;
@property (nonatomic) BOOL isInPlaylist;
@property (nonatomic) BOOL ignoreAuditionDuration;

+ (id)awemeModelJSONTransformer;
+ (id)musicModelJSONTransformer;
+ (id)musicMediaModelJSONTransformer;
+ (id)songInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
