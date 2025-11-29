@class NSString;

@interface AWELunaMusicAnchorSongInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *songId;
@property (copy, nonatomic) NSString *authorName;
@property (copy, nonatomic) NSString *iconURL;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
