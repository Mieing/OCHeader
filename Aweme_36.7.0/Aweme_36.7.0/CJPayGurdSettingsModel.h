@class CJPayFalconSettingsModel;

@interface CJPayGurdSettingsModel : JSONModel

@property (nonatomic) BOOL offlineRollback;
@property (nonatomic) BOOL isMergeRequest;
@property (retain, nonatomic) CJPayFalconSettingsModel *falconSettings;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
