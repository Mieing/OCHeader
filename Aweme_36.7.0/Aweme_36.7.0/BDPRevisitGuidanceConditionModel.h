@class NSString, NSArray, NSDictionary, BDPRevisitGuidanceConditionRuleModel;

@interface BDPRevisitGuidanceConditionModel : BDPBasePluginModel

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL status;
@property (nonatomic) long long priority;
@property (nonatomic) long long data;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *leftButton;
@property (copy, nonatomic) NSString *rightButton;
@property (copy, nonatomic) NSString *jumpSchema;
@property (copy, nonatomic) NSString *extraData;
@property (copy, nonatomic) NSArray *triggerCheck;
@property (copy, nonatomic) NSDictionary *extraDataDict;
@property (retain, nonatomic) BDPRevisitGuidanceConditionRuleModel *matchRule;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (id)modelCustomWillTransformFromDictionary:(id)a0;
- (BOOL)use_lynx;
- (id)lynx_schema;
- (id)guidance_type;
- (BOOL)tryUpdateInfoWithCustomData:(id)a0;
- (id)getFullLynxSchemaWithPath:(id)a0 extra:(id)a1;
- (unsigned long long)getUIStyle;
- (id)left_button_bury;
- (id)right_button_bury;
- (id)pathTypeForPath:(id)a0;
- (void).cxx_destruct;

@end
