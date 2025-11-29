@class NSString, AWECodeGenUrlModel;

@interface AWECodeGenRemindStyleModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *backgroundColor;
@property (retain, nonatomic) AWECodeGenUrlModel *iconModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
