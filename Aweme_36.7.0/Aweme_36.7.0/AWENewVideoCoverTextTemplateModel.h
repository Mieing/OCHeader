@class NSDictionary;

@interface AWENewVideoCoverTextTemplateModel : AWETextTemplateModel

@property (nonatomic) BOOL isHistory;
@property (nonatomic) BOOL isPersonalizedRecommend;
@property (copy, nonatomic) NSDictionary *userSetting;
@property (copy, nonatomic) id /* block */ userSettingDidFinishFetch;

- (void)fetchStickerCategoryListInternal;
- (BOOL)supportMultiCategories;
- (void).cxx_destruct;

@end
