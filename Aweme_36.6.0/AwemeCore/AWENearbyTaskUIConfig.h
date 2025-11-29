@class NSString;

@interface AWENearbyTaskUIConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *componentType;
@property (copy, nonatomic) NSString *componentId;
@property (nonatomic) long long useDefaultRule;
@property (nonatomic) BOOL coldStartLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
