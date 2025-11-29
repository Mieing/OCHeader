@class NSString, AWEURLModel;

@interface AWEPlaylistVideoStatusResponse : AWEBaseApiModel

@property (nonatomic) long long schedule;
@property (retain, nonatomic) AWEURLModel *videoUrl;
@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSString *clipMusicId;
@property (nonatomic) long long startTime;

+ (id)videoUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
