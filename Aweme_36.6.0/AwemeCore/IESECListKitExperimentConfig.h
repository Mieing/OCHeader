@class NSArray, NSString;

@interface IESECListKitExperimentConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *abTestKeyList;
@property (copy, nonatomic) NSArray *settingsKeyList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
