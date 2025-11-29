@class NSNumber, NSString, NSArray;

@interface ACCQuickFlashRedPackSettingsModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSString *statusMsg;
@property (nonatomic) BOOL shouldShowShootGuide;
@property (retain, nonatomic) NSArray *redBagModels;
@property (retain, nonatomic) NSArray *redBagFlashModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)redBagModelsJSONTransformer;
+ (id)redBagFlashModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
