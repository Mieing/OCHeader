@class NSString, NSDictionary, NSArray, UIView;

@interface IESECSliceAction : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *sliceId;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDictionary *fields;
@property (copy, nonatomic) NSDictionary *inheritedParams;
@property (copy, nonatomic) NSArray *actions;
@property (nonatomic) BOOL disable;
@property (weak, nonatomic) UIView *activeView;
@property (copy, nonatomic) NSDictionary *next;
@property (copy, nonatomic) NSString *actionMonitorID;
@property (copy, nonatomic) NSString *path;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionsJSONTransformer;
+ (id)sliceActionWithName:(id)a0 Params:(id)a1;
+ (id)sliceActionWithName:(id)a0 Params:(id)a1 Next:(id)a2;
+ (id)nextJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithSliceAction:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
