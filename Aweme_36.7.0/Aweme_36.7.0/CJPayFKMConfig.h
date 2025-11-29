@class CJPayFKMNFCConfig, CJPayFKMLocationReportConfig, CJPayFKMHomeUIConfig, CJPayFKMBatchCodeConfig, CJPayFKMIntervalConfig;

@interface CJPayFKMConfig : JSONModel

@property (retain, nonatomic) CJPayFKMHomeUIConfig *homeUIConfig;
@property (retain, nonatomic) CJPayFKMIntervalConfig *intervalConfig;
@property (retain, nonatomic) CJPayFKMLocationReportConfig *locationReportConfig;
@property (retain, nonatomic) CJPayFKMBatchCodeConfig *batchCodeConfig;
@property (retain, nonatomic) CJPayFKMNFCConfig *nfkConfig;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
