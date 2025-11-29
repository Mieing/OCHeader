@class NSString, NSArray;

@interface IESLiveFaceEffectCategoryModel : IESCategoryModel

@property (copy, nonatomic) NSString *subExtra;
@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *categoryIdentifier;
@property (copy, nonatomic) NSString *categoryKey;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSArray *effects;

- (void).cxx_destruct;

@end
