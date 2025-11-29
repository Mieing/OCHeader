@class NSString;

@interface AWEInnerPushExitRule : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long actionType;
@property (nonatomic) long long actionCount;
@property (nonatomic) double hiddenPeriod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
