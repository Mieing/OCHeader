@class NSString, NSArray;

@interface BCMCheckParamModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *btmLevel;
@property (copy, nonatomic) NSString *btmFullCode;
@property (copy, nonatomic) NSString *btmName;
@property (copy, nonatomic) NSString *btmDesc;
@property (copy, nonatomic) NSString *extraRules;
@property (copy, nonatomic) NSArray *unitList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)unitListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
