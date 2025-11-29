@class NSString;

@interface AWECodeGenMusicDiversionConfigModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *musicDetailHeaderLunaConfig;
@property (copy, nonatomic) NSString *musicGuideConfig;
@property (copy, nonatomic) NSString *configId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
