@class AWEMinorAlbum, NSString;

@interface AWETeenSearchAlbumResult : AWEBaseApiModel

@property (retain, nonatomic) AWEMinorAlbum *album;
@property (copy, nonatomic) NSString *searchAttachInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
