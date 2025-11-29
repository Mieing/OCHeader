@class NSString;

@interface AWECodeGenLandingSwitchEditModel : AWEBaseDataModel

@property (nonatomic) int bizId;
@property (nonatomic) long long tabId;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *nameEn;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
