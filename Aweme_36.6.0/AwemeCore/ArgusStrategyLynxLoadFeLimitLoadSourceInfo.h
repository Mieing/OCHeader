@class NSArray, NSString;

@interface ArgusStrategyLynxLoadFeLimitLoadSourceInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *cidList;
@property (nonatomic) BOOL onlyVerifyMainTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
