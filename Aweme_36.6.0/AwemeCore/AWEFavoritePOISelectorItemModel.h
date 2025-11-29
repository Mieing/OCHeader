@class NSString, NSArray;

@interface AWEFavoritePOISelectorItemModel : AWEBaseApiModel <NSMutableCopying, NSCopying>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *selectorType;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL locationPerm;
@property (copy, nonatomic) NSArray *nextList;

+ (id)nextListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
