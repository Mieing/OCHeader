@class NSString, IESIMCodeGenTagImageModel;

@interface IESIMCodeGenTagApplicationTipsModel : AWEBaseDataModel

@property (retain, nonatomic) IESIMCodeGenTagImageModel *iconModel;
@property (copy, nonatomic) NSString *text;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
