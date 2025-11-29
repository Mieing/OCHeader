@class NSNumber, NSString;

@interface AWEHPTabRefreshCustomConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSNumber *animateType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
