@class NSString;

@interface BDUGFlowSettingsModel : BDUGFlowBasicModel

@property (nonatomic) BOOL isEnable;
@property (nonatomic) BOOL isShowOrderTips;
@property (nonatomic) BOOL isEnableUploadFlow;
@property (nonatomic) long long serverRequestInterval;
@property (nonatomic) long long remainFlowThold;
@property (nonatomic) long long localQueryInterval;
@property (nonatomic) long long serverUpdateInterval;
@property (copy, nonatomic) NSString *cmccRequestUrl;
@property (copy, nonatomic) NSString *telecomRequestUrl;

+ (id)modelWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)toJsonDictionary;

@end
