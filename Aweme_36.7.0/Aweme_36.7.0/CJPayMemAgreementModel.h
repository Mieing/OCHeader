@class NSString;

@interface CJPayMemAgreementModel : JSONModel

@property (copy, nonatomic) NSString *group;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) BOOL isChoose;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (id)toQuickPayUserAgreement;
- (void).cxx_destruct;

@end
