@class AWEMinorAlbum, NSArray;

@interface AWETeenGeneralBlockModel : AWEBaseApiModel

@property (retain, nonatomic) AWEMinorAlbum *minorAlbum;
@property (copy, nonatomic) NSArray *elements;
@property (copy, nonatomic) NSArray *awemeList;
@property (nonatomic) BOOL hasMore;

+ (id)awemeListJSONTransformer;
+ (id)elementsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
