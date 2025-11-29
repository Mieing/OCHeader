@class NSArray;
@protocol CJPayFalconDefaultConfigModel, CJPayFalconCustomConfigModel;

@interface CJPayFalconSettingsModel : JSONModel

@property (nonatomic) BOOL enableIntercept;
@property (copy, nonatomic) NSArray<CJPayFalconDefaultConfigModel> *falconConfigList;
@property (copy, nonatomic) NSArray<CJPayFalconCustomConfigModel> *customConfigList;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
