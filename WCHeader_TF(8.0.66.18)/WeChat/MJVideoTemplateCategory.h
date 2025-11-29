@class NSString, NSArray;

@interface MJVideoTemplateCategory : NSObject

@property (readonly, copy, nonatomic) NSString *categoryKey;
@property (readonly, copy, nonatomic) NSString *categoryName;
@property (readonly, copy, nonatomic) NSArray *videoTemplates;

+ (id)recommendedCategoryKey;

- (id)initWithCategory:(id)a0;
- (void).cxx_destruct;

@end
