@class NSString;

@interface AWEAwemeRelevantLiveModel : AWEBaseApiModel

@property (nonatomic) long long videoRelevantCategory;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long linkmicKtvSongAuthorId;
@property (nonatomic) long long linkmicKtvSongId;
@property (copy, nonatomic) NSString *linkmicKtvSongName;
@property (copy, nonatomic) NSString *extra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
