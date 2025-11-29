@class AWEPOIAlbumBottomInfo, NSArray;

@interface AWEPOIAlbumBottomAndHeadCO : AWEBaseApiModel

@property (retain, nonatomic) AWEPOIAlbumBottomInfo *bottomBar;
@property (copy, nonatomic) NSArray *rightMoreItems;

+ (id)rightMoreItemsJSONTransformer;
+ (id)bottomBarJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
