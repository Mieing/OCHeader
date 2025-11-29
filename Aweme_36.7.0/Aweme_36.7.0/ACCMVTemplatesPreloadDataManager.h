@class NSArray, ACCMVCategoryModel, NSDictionary, NSNumber;

@interface ACCMVTemplatesPreloadDataManager : NSObject

@property (copy, nonatomic) NSArray *mvTemplatesCategories;
@property (copy, nonatomic) NSArray *firstPageHotMVTemplates;
@property (retain, nonatomic) ACCMVCategoryModel *defaultCategory;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSNumber *sortedPosition;
@property (copy, nonatomic) NSDictionary *trackInfo;

+ (id)sharedInstance;

- (void)preloadMVTemplatesCategoriesAndHotMVTemplatesWithExtraParams:(id)a0 completion:(id /* block */)a1;
- (void)cleanCached;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
