@class NSString, NSArray, AWEPlayInteractionGenericButtonFrequencyConfigModel, AWEPlayInteractionGenericButtonUIConfigModel;

@interface AWEPlayInteractionGenericButtonSettingsModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *buttonPatternStr;
@property (copy, nonatomic) NSString *buttonType;
@property (copy, nonatomic) NSString *frequencyKey;
@property (nonatomic) double buttonInterval;
@property (retain, nonatomic) AWEPlayInteractionGenericButtonUIConfigModel *uiConfig;
@property (retain, nonatomic) AWEPlayInteractionGenericButtonUIConfigModel *leftConfig;
@property (retain, nonatomic) AWEPlayInteractionGenericButtonUIConfigModel *rightConfig;
@property (copy, nonatomic) NSArray *statusConfig;
@property (retain, nonatomic) AWEPlayInteractionGenericButtonFrequencyConfigModel *frequencyConfig;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSArray *presentTriggerScene;
@property (nonatomic) BOOL shouldUseLynxElementForClickAction;
@property (nonatomic) BOOL stayVisibleAfterDisplay;
@property (nonatomic) BOOL needActionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configForKey:(id)a0;
+ (id)uiConfigJSONTransformer;
+ (id)leftConfigJSONTransformer;
+ (id)rightConfigJSONTransformer;
+ (id)statusConfigJSONTransformer;
+ (id)frequencyConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (unsigned long long)buttonPattern;
- (void)p_fillDefaultValuesForConfig:(id)a0;
- (void)p_fillMissingFieldsForConfig:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;

@end
