@class NSArray, NSString;

@interface OMJTemplateRecommendResult : NSObject

@property (readonly, nonatomic) NSArray *categories;
@property (readonly, nonatomic) BOOL hasMoreTemplates;
@property (readonly, nonatomic) NSString *pagingContext;
@property (readonly, nonatomic) BOOL enableSingleTemplateMusicRec;
@property (readonly, nonatomic) NSArray *additionTemplateInfos;

- (id)initWithBackingResult:(const void *)a0;
- (id)description;
- (void).cxx_destruct;

@end
