@class NSString;

@interface AWEMusicArtistModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *artistName;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
