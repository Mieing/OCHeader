@class AWECodeGenRandomInfoModel, NSArray;

@interface AWECodeGenTemplateConfigModel : AWEBaseDataModel

@property (nonatomic) long long templateId;
@property (retain, nonatomic) AWECodeGenRandomInfoModel *randomInfoModel;
@property (nonatomic) int count;
@property (copy, nonatomic) NSArray *forceStyleArray;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
