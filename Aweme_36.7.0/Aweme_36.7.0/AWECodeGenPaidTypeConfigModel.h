@class NSString;

@interface AWECodeGenPaidTypeConfigModel : AWEBaseDataModel

@property (nonatomic) int type;
@property (copy, nonatomic) NSString *name;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
