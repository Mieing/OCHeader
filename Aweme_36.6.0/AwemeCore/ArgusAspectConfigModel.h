@class NSArray, NSString;

@interface ArgusAspectConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long switchMode;
@property (retain, nonatomic) NSArray *rules;
@property (nonatomic) BOOL isAsync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_parseRules:(id)a0 defaultSwitch:(long long)a1;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
