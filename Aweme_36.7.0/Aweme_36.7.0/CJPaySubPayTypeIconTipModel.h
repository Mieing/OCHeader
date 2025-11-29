@class NSString, NSArray;
@protocol CJPaySubPayTypeIconTipInfoModel;

@interface CJPaySubPayTypeIconTipModel : JSONModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray<CJPaySubPayTypeIconTipInfoModel> *contentList;
@property (copy, nonatomic) NSString *iconType;
@property (copy, nonatomic) NSString *buttonDesc;
@property (copy, nonatomic) NSString *contentAlignment;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
