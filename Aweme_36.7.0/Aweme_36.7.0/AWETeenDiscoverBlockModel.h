@class NSString, NSArray;

@interface AWETeenDiscoverBlockModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *blockId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *albums;

+ (id)albumsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
