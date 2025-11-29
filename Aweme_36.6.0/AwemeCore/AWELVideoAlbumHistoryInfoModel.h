@class NSString, NSNumber;

@interface AWELVideoAlbumHistoryInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *albumID;
@property (copy, nonatomic) NSString *episodeID;
@property (nonatomic) long long watchedRank;
@property (retain, nonatomic) NSNumber *watchedDuration;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
