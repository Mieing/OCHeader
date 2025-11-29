@class NSString, AWECodeGenUrlModel;

@interface AWECodeGenImageInsCreationInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *button;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) int type;
@property (retain, nonatomic) AWECodeGenUrlModel *iconModel;
@property (copy, nonatomic) NSString *logInfo;
@property (retain, nonatomic) AWECodeGenUrlModel *darkIconModel;
@property (copy, nonatomic) NSString *bannerType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
