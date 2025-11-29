@class NSDictionary, AWELoginStrategyMethodExtraInfo, NSString;

@interface AWELoginStrategyMethodModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *loginSceneModelDict;
@property (retain, nonatomic) AWELoginStrategyMethodExtraInfo *extraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extraInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
