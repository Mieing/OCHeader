@class NSString, NSDictionary, NSArray, UIView;

@interface IESECSliceAction : MTLModel <MTLJSONSerializing, IESECEventChainActionEventProtocol>

@property (copy, nonatomic) NSString *sliceId;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDictionary *fields;
@property (copy, nonatomic) NSArray *chain;
@property (copy, nonatomic) NSDictionary *inheritedParams;
@property (copy, nonatomic) NSArray *actions;
@property (weak, nonatomic) UIView *activeView;
@property (copy, nonatomic) NSDictionary *next;
@property (copy, nonatomic) NSString *actionMonitorID;
@property (copy, nonatomic) NSString *path;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionsJSONTransformer;
+ (id)actionWithDictionary:(id)a0 error:(id *)a1;
+ (id)nextJSONTransformer;
+ (id)chainJSONTransformer;
+ (id)actionWithDictionary:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

@end
