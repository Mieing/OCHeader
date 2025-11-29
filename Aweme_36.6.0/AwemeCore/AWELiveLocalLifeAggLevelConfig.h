@class NSDictionary, NSString;

@interface AWELiveLocalLifeAggLevelConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *levelByFrom;
@property (copy, nonatomic) NSString *defaultLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
