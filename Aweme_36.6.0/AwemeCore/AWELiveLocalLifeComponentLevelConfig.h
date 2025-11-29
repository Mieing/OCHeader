@class NSString;

@interface AWELiveLocalLifeComponentLevelConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *level;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
