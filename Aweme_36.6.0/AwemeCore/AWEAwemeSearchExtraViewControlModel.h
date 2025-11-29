@class NSMutableArray;

@interface AWEAwemeSearchExtraViewControlModel : AWEBaseApiModel

@property (nonatomic) BOOL hideAllAnchor;
@property (nonatomic) BOOL hideMixBar;
@property (retain, nonatomic) NSMutableArray *bottomControlList;

+ (id)bottomControlListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
