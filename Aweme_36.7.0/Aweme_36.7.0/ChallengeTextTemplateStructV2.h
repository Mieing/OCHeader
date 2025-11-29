@class NSMutableArray;

@interface ChallengeTextTemplateStructV2 : GPBMessage

@property (nonatomic) long long insertTemplateType;
@property (nonatomic) BOOL hasInsertTemplateType;
@property (retain, nonatomic) NSMutableArray *insertTemplateCategoryListArray;
@property (readonly, nonatomic) unsigned long long insertTemplateCategoryListArray_Count;
@property (nonatomic) BOOL disableDefaultCategory;
@property (nonatomic) BOOL hasDisableDefaultCategory;

+ (id)descriptor;

@end
