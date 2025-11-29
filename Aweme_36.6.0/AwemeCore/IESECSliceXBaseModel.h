@class NSDictionary, IESECSliceXTemplateInfo;

@interface IESECSliceXBaseModel : NSObject <NSCopying>

@property (retain, nonatomic) NSDictionary *exprMap;
@property (retain, nonatomic) IESECSliceXTemplateInfo *context;

+ (id)modelWithDict:(id)a0 context:(id)a1;
+ (id)highPriorityExprKeys;
+ (id)highPriorityModelKeys;
+ (void)initialize;

- (BOOL)continueUpdateModelAfterHighPriorityKeys;
- (BOOL)continueUpdateModelAfterHighPriorityModelKeys;
- (void).cxx_destruct;
- (void)updateModelWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
