@class NSString;

@interface AWECodeGenBusinessInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *rawData;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
