@class NSString, NSMutableArray;

@interface AWEFantaSSHomepageSearchIDItemModel : AWEBaseApiModel <NSCopying>

@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSString *rawQuery;
@property (copy, nonatomic) NSString *reqQuery;
@property (retain, nonatomic) NSMutableArray *requestGroups;

+ (id)requestGroupsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
