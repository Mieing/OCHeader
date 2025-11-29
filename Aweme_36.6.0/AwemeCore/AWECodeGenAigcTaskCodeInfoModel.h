@class NSString;

@interface AWECodeGenAigcTaskCodeInfoModel : AWEBaseDataModel

@property (nonatomic) long long aigcServerCode;
@property (copy, nonatomic) NSString *causeCode;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
