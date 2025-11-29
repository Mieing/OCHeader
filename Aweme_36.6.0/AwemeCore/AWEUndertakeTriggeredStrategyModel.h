@class NSString, NSArray, NSDictionary, AWEUndertakeDataModel;

@interface AWEUndertakeTriggeredStrategyModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *strategyID;
@property (retain, nonatomic) AWEUndertakeDataModel *undertakeData;
@property (copy, nonatomic) NSArray *avoidVideoTypes;
@property (copy, nonatomic) NSArray *allowedSceneList;
@property (copy, nonatomic) NSArray *avoidEnvironment;
@property (retain, nonatomic) NSDictionary *extraData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
