@class NSString, NSArray;

@interface ACCPicTemplateCategoryModel : NSObject

@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSString *categoryKey;
@property (copy, nonatomic) NSString *categoryId;
@property (nonatomic) BOOL isDefault;
@property (nonatomic) long long categorySource;
@property (copy, nonatomic) NSArray *templates;

- (BOOL)isRecentlyUsed;
- (void).cxx_destruct;

@end
