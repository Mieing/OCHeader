@class AWEMinorAlbum, NSArray, NSString;

@interface AWETeenGeneralIPAlbumCardModel : AWEBaseApiModel

@property (retain, nonatomic) AWEMinorAlbum *specificAlbum;
@property (retain, nonatomic) NSArray *seriesAlbumList;
@property (nonatomic) long long seriesAlbumCount;
@property (copy, nonatomic) NSString *alias;
@property (copy, nonatomic) NSString *keyWord;
@property (copy, nonatomic) NSString *keyWordAlias;

+ (id)specificAlbumJSONTransformer;
+ (id)seriesAlbumListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
