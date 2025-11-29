@class NSString, NSArray;

@interface IESLiveBeautyCrowdTestModeModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *modeKey;
@property (retain, nonatomic) NSString *modeName;
@property (retain, nonatomic) NSArray *panelConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)panelConfigJSONTransformer;
+ (id)crowdTestModeModelToJson:(id)a0;
+ (id)jsonToCrowdTestMode:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (id)modeIdentifier;

@end
