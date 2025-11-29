@class NSString, IESIMCodeGenTagImageModel;

@interface IESIMCodeGenTagBannerModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) IESIMCodeGenTagImageModel *imageModel;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *actionText;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
