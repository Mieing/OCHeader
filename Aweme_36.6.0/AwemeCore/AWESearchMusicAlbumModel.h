@class NSString, NSArray;

@interface AWESearchMusicAlbumModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *moreURL;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) NSArray *musicList;

+ (id)musicListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
