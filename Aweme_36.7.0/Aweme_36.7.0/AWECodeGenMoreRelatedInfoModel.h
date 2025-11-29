@class NSString, AWECodeGenUrlModel;

@interface AWECodeGenMoreRelatedInfoModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenUrlModel *iconModel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *jointTag;
@property (copy, nonatomic) NSString *schema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
