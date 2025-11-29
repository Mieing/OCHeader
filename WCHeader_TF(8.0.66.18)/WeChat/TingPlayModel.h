@class MMListenCategoryItem, TingListSourceContext, TingItem, TingFlowPlayerConfiguration;
@protocol TingPlayTaskService;

@interface TingPlayModel : NSObject

@property (retain, nonatomic) id<TingPlayTaskService> taskService;
@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) TingItem *initialTingItem;
@property (retain, nonatomic) MMListenCategoryItem *initialCategoryItem;
@property (retain, nonatomic) TingFlowPlayerConfiguration *configuration;
@property (retain, nonatomic) TingListSourceContext *listContext;

+ (id)modelWithTingItem:(id)a0 scene:(int)a1;
+ (id)modelWithCategoryItem:(id)a0 presetItems:(id)a1 index:(unsigned long long)a2 scene:(int)a3;
+ (id)modelWithCategoryItem:(id)a0 listContext:(id)a1 index:(unsigned long long)a2 scene:(int)a3;
+ (id)modelWithListenIds:(id)a0 index:(unsigned long long)a1 scene:(int)a2;
+ (BOOL)enableDisablePresetItemsFeature;
+ (id)modelWithTaskSnapshot:(id)a0 scene:(int)a1;
+ (id)modelWithListSource:(id)a0 index:(unsigned long long)a1 scene:(int)a2;
+ (id)modelWithCategoryItem:(id)a0 subCategoryItem:(id)a1 presetItems:(id)a2 index:(unsigned long long)a3 scene:(int)a4;
+ (id)convertSubCategoryItem:(id)a0 categoryItem:(id)a1;

- (void).cxx_destruct;

@end
