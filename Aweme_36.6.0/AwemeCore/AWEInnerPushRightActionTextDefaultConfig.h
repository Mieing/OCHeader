@class NSString, NSArray;

@interface AWEInnerPushRightActionTextDefaultConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enable;
@property (retain, nonatomic) NSString *defaultText;
@property (retain, nonatomic) NSArray *skipRuleArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)skipRuleArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
