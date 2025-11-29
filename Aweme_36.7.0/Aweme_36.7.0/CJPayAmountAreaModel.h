@class NSString, CJPaySubPayTypeIconTipModel;

@interface CJPayAmountAreaModel : JSONModel

@property (copy, nonatomic) NSString *areaName;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL isTextHighLight;
@property (retain, nonatomic) CJPaySubPayTypeIconTipModel *iconTips;
@property (copy, nonatomic) NSString *type;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
