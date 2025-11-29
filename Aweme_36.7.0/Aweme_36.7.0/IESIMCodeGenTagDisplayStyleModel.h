@class NSString, IESIMCodeGenTagImageModel;

@interface IESIMCodeGenTagDisplayStyleModel : AWEBaseDataModel

@property (nonatomic) int type;
@property (retain, nonatomic) IESIMCodeGenTagImageModel *iconModel;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColorLight;
@property (copy, nonatomic) NSString *backgroundColorLight;
@property (copy, nonatomic) NSString *textColorDark;
@property (copy, nonatomic) NSString *backgroundColorDark;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
