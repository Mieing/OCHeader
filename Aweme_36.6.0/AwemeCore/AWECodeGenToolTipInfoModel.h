@class NSString;

@interface AWECodeGenToolTipInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *urlSchema;
@property (copy, nonatomic) NSString *notification;
@property (copy, nonatomic) NSString *buttonText;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
