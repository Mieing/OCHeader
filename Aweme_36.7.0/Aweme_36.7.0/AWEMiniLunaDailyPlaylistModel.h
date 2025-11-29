@class NSString;

@interface AWEMiniLunaDailyPlaylistModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *dateStr;
@property (copy, nonatomic) NSString *subTitle;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
