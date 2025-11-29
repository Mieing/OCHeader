@class NSString;

@interface AWEIMCodeGenFansGroupCreateInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *p_newGroupName;
@property (nonatomic) int groupNumLeft;
@property (nonatomic) int defaultAuditSwitch;
@property (nonatomic) int defaultLiveAutoSync;
@property (nonatomic) int defaultItemAutoSync;
@property (copy, nonatomic) NSString *legalUrl;
@property (nonatomic) int groupCountMaxLimit;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
