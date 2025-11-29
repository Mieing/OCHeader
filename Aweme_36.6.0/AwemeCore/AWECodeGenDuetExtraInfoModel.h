@class NSString;

@interface AWECodeGenDuetExtraInfoModel : AWEBaseDataModel

@property (nonatomic) int duetReason;
@property (copy, nonatomic) NSString *extra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
