@class NSArray, NSString;

@interface AWEUGLocalPushModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSString *abVersion;
@property (nonatomic) long long interval;
@property (copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
