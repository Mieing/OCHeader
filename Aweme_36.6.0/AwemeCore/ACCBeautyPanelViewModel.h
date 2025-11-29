@class NSArray, NSString, AWEComposerBeautyEffectCategoryWrapper;

@interface ACCBeautyPanelViewModel : NSObject

@property (copy, nonatomic) NSArray *filteredCategories;
@property (retain, nonatomic) AWEComposerBeautyEffectCategoryWrapper *currentCategory;
@property (copy, nonatomic) NSString *businessName;

- (id)initWithBusinessName:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
