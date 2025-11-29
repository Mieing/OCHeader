@class NSString, IESCategoryModel, NSArray;
@protocol AWETextTemplateCategoryModelDataSource, AWETextTemplateCategoryModelDelegate;

@interface AWETextTemplateCategoryModel : NSObject

@property (getter=isLoading) BOOL loading;
@property (nonatomic) BOOL enableNewTextTemplate;
@property (retain, nonatomic) IESCategoryModel *categoryModel;
@property (weak, nonatomic) id<AWETextTemplateCategoryModelDelegate> delegate;
@property (weak, nonatomic) id<AWETextTemplateCategoryModelDataSource> dataSource;
@property (copy, nonatomic) NSString *panelName;
@property (copy, nonatomic) NSString *categoryIdentifier;
@property (copy, nonatomic) NSString *categoryKey;
@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSArray *stickers;
@property (copy, nonatomic) NSArray *orignalStickers;
@property (nonatomic) double cachedWidth;
@property (copy, nonatomic) id /* block */ stickerFilterBlock;
@property (nonatomic, getter=isStickerListLoadFromCache) BOOL stickerListLoadFromCache;
@property (nonatomic) double stickerListStartTime;

- (void)markAsReaded;
- (void)loadStickerListIfNeeded;
- (void)fetchEffectList;
- (void)handleWithEffectList:(id)a0 error:(id)a1;
- (void)fetchEffectListInternal;
- (BOOL)isHotTab;
- (id)filterNewTextTemplate:(id)a0;
- (id)initWithIESCategoryModel:(id)a0 enableNewTextTemplate:(BOOL)a1;
- (void).cxx_destruct;
- (id)category;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
