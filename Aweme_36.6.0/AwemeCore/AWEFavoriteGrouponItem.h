@class NSNumber, NSString, AWEURLModel;

@interface AWEFavoriteGrouponItem : AWEBaseApiModel

@property (copy, nonatomic) NSNumber *grouponID;
@property (copy, nonatomic) NSString *grouponTag;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *favoriteTag;
@property (retain, nonatomic) NSNumber *price;
@property (retain, nonatomic) NSNumber *originalPrice;

+ (id)coverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
