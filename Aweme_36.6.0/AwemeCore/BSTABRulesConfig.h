@class NSArray, NSString;

@interface BSTABRulesConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enable;
@property (retain, nonatomic) NSArray *trackRules;
@property (copy, nonatomic) NSString *bstTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)trackRulesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
