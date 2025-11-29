@class NSArray, NSString, AWEIMSkylightExitCondition;

@interface AWEIMSkylightGroupSort : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long showNumber;
@property (copy, nonatomic) NSArray *priorityOrder;
@property (retain, nonatomic) AWEIMSkylightExitCondition *exitCondition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
