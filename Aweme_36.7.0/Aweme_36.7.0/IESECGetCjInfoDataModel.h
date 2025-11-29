@class NSString, NSDictionary;

@interface IESECGetCjInfoDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *bioType;
@property (copy, nonatomic) NSString *biometricParams;
@property (copy, nonatomic) NSString *cjSdk;
@property (copy, nonatomic) NSString *isJailbreak;
@property (copy, nonatomic) NSDictionary *financeRisk;
@property (nonatomic) BOOL installedUnionPayApp;
@property (copy, nonatomic) NSString *cjPassthroughInfo;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
