@class AWEComposerBeautyEffectWrapper, NSString, NSArray, IESCategoryModel;

@interface AWEComposerBeautyEffectCategoryWrapper : NSObject

@property (retain, nonatomic) IESCategoryModel *category;
@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSArray *effects;
@property (nonatomic) long long group;
@property (nonatomic) long long gender;
@property (nonatomic) BOOL isDefault;
@property (nonatomic) BOOL isForD;
@property (nonatomic) BOOL isForT;
@property (nonatomic) BOOL isForM;
@property (nonatomic) BOOL exclusive;
@property (nonatomic) BOOL isLocalEffect;
@property (nonatomic) BOOL needShowTips;
@property (readonly, nonatomic) BOOL isSwitchEnabled;
@property (retain, nonatomic) AWEComposerBeautyEffectWrapper *selectedEffect;
@property (retain, nonatomic) AWEComposerBeautyEffectWrapper *userSelectedEffect;
@property (retain, nonatomic) NSString *categoryId;
@property (retain, nonatomic) NSString *parentId;
@property (retain, nonatomic) NSString *primaryCategoryName;
@property (retain, nonatomic) NSArray *primaryCategoryIcons;
@property (copy, nonatomic) NSArray *childCategories;
@property (nonatomic) BOOL isChildCategoryExclusive;
@property (weak, nonatomic) AWEComposerBeautyEffectCategoryWrapper *parentCategory;
@property (retain, nonatomic) AWEComposerBeautyEffectCategoryWrapper *selectedChildCategory;
@property (retain, nonatomic) AWEComposerBeautyEffectCategoryWrapper *userSelectedChildCategory;
@property (nonatomic) BOOL isDefaultChildCategory;
@property (weak, nonatomic) AWEComposerBeautyEffectCategoryWrapper *defaultChildCategory;
@property (nonatomic) BOOL isNoneCategory;
@property (readonly, nonatomic) BOOL isPrimaryCategory;

- (id)appliedBeautyNames;
- (id)appliedBeautyValues;
- (id)initWithCategory:(id)a0 responseModel:(id)a1;
- (BOOL)hasChangedCategoryValue;
- (BOOL)hasAppliedBeautyEffect;
- (void).cxx_destruct;
- (id)initWithCategory:(id)a0;

@end
