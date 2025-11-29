@class NSArray, NSString;

@interface AWERecordBeautyCategoryExtraModel : NSObject

@property (copy, nonatomic) NSArray *iconURLs;
@property (copy, nonatomic) NSString *categoryId;
@property (copy, nonatomic) NSString *parentId;
@property (nonatomic) BOOL shouldShowSwitch;
@property (nonatomic) BOOL isDefault;
@property (nonatomic) BOOL isChildCategoryExclusive;
@property (nonatomic) BOOL isChildItemsExclusive;
@property (copy, nonatomic) NSString *primaryPanelIconId;

- (id)initWithExtraString:(id)a0;
- (void)p_setupPropertiesWithExtraString:(id)a0;
- (id)p_getCategoryIdFromDict:(id)a0;
- (id)p_getParentIdFromDict:(id)a0;
- (BOOL)p_getShowSwitchFromDict:(id)a0;
- (BOOL)p_getIsDefaultFromDict:(id)a0;
- (BOOL)p_getIsChildCategoryExclusiveFromDict:(id)a0;
- (BOOL)p_getIsChildItemsExclusiveFromDict:(id)a0;
- (id)p_getPrimaryPanelIconIdFromDict:(id)a0;
- (id)p_getStringValueFromDict:(id)a0 key:(id)a1;
- (BOOL)p_getBOOLValueFromDict:(id)a0 key:(id)a1;
- (void)updateIconURLsWithPrefixes:(id)a0;
- (void).cxx_destruct;

@end
