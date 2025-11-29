@class NSString, NSArray, UIImage;

@interface AWEDouyinStickerCategoryModel : AWEStickerCategoryModel <ACCGenericEffectCategoryModel>

@property (nonatomic) double cachedWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *selectedIconUrls;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } titleFrame;
@property (nonatomic) double titleFontSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageFrame;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;

+ (id)favoriteCategoryModel;
+ (id)searchCategoryModel;

- (id)categoryImage;
- (void)setupForFavorite;
- (void)setupForSearch;
- (id)initWithIESCategoryModel:(id)a0;
- (void)parseExtra;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isFavorite;

@end
