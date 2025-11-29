@class NSString;

@interface AWEDailyPlaylistModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *dateStr;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithMiniDailyPlaylistModel:(id)a0;
- (void).cxx_destruct;

@end
