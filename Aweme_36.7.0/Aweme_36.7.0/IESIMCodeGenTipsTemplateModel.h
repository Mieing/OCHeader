@class NSString, IESIMCodeGenTipsExtraModel;

@interface IESIMCodeGenTipsTemplateModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *key;
@property (nonatomic) int action;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *link;
@property (retain, nonatomic) IESIMCodeGenTipsExtraModel *extraModel;
@property (nonatomic) BOOL needHighlight;
@property (nonatomic) BOOL isDigit;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
