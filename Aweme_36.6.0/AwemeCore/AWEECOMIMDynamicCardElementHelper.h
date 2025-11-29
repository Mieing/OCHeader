@class NSDictionary, NSMutableDictionary, NSArray;

@interface AWEECOMIMDynamicCardElementHelper : NSObject

@property (retain, nonatomic) NSMutableDictionary *elementViewTypeDictM;
@property (readonly, nonatomic) NSMutableDictionary *elementViewCacheM;
@property (nonatomic) BOOL enableViewCache;
@property (retain, nonatomic) NSDictionary *inputElementDict;
@property (retain, nonatomic) NSArray *inputActionTypeArr;
@property (nonatomic) BOOL enableViewUseNewUI;

+ (BOOL)enableDynamicCardRefactor;
+ (long long)inputElementTypeStartNum;
+ (long long)cardViewV2MaxCacheCount;
+ (long long)elementWithOriginalString:(id)a0;

- (id)rootElementViewForElement:(id)a0;
- (Class)elementClassWithElementModel:(id)a0;
- (id)rootElementViewWithElementForCalculateHeight:(id)a0;
- (id)configSubElementViewsForElement:(id)a0 parentElementView:(id)a1 maxSize:(struct CGSize { double x0; double x1; })a2;
- (void)registerAllElementViewClass;
- (void)registerElementViewClass:(Class)a0 elementType:(long long)a1;
- (id)initWithInputElementDict:(id)a0 inputActionTypeArr:(id)a1;
- (BOOL)checkNeedPreCalculateWidth:(id)a0;
- (struct CGSize { double x0; double x1; })dealChildrenWithParentElementView:(id)a0 childElement:(id)a1 autoPartWidth:(double)a2 allPercent:(long long)a3 containViewWidth:(double)a4 hasPreCalculateWidth:(BOOL)a5 layoutElementView:(id)a6 left:(double)a7 top:(double)a8 elementModel:(id)a9 maxSize:(struct CGSize { double x0; double x1; })a10;
- (id)filterTypeSet;
- (BOOL)isFilterType:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
