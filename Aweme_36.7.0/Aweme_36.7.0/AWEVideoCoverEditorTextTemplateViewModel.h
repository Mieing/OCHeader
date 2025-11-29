@class NSDictionary;

@interface AWEVideoCoverEditorTextTemplateViewModel : AWETextTemplateModel

@property (nonatomic) BOOL isHistory;
@property (nonatomic) BOOL isPersonalizedRecommend;
@property (copy, nonatomic) NSDictionary *userSetting;
@property (copy, nonatomic) id /* block */ userSettingDidFinishFetch;

- (void)fetchStickerCategoryListInternal;
- (BOOL)supportMultiCategories;
- (id)initWithPanelName:(id)a0 isHistory:(BOOL)a1;
- (void).cxx_destruct;

@end
