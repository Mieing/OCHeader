@class AWEMusicAppendPlaylistInfo, NSString, NSArray, AWEMusicDiversionAuthorInfo, AWEURLModel;

@interface AWEMusicDiversionInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *diversionMediaType;
@property (copy, nonatomic) NSString *lunaSongID;
@property (copy, nonatomic) NSString *mvMetaSongID;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (nonatomic) int hitStrategy;
@property (nonatomic) long long hitStrategyV2;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *lunaColorGradientInfo;
@property (nonatomic) long long lunaButtonType;
@property (nonatomic) long long collectStatus;
@property (nonatomic) BOOL isSameSong;
@property (nonatomic) BOOL canMatchedSongShowInHeader;
@property (retain, nonatomic) AWEMusicDiversionAuthorInfo *lunaAuthorInfo;
@property (retain, nonatomic) AWEMusicAppendPlaylistInfo *appendPlaylistInfo;

+ (id)coverURLJSONTransformer;
+ (id)lunaSongIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
