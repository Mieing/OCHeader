@class NSMutableDictionary, AWEMinorAlbum, AWEAwemeModel, NSArray;

@interface AWETeenGeneralAlbumCardModel : AWEBaseApiModel

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEMinorAlbum *minorAlbum;
@property (retain, nonatomic) NSMutableDictionary *trackParams;
@property (copy, nonatomic) NSArray *awemeList;
@property (nonatomic) BOOL hasMore;

+ (id)awemeListJSONTransformer;
+ (id)awemeModelJSONTransformer;
+ (id)minorAlbumJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
