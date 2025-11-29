@class NSString, AWECodeGenUrlModel;

@interface AWECodeGenTheaterGuideBarConfigModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenUrlModel *backgroundModel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *name;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
