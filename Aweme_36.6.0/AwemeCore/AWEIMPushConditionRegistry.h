@class NSArray, NSString, NSLock, AWEIMPushConditionFactory;

@interface AWEIMPushConditionRegistry : NSObject <AWEIMPushConditionRegistryProtocol>

@property (retain, nonatomic) AWEIMPushConditionFactory *factory;
@property (retain, nonatomic) NSArray *innerConditions;
@property (retain, nonatomic) NSLock *innerLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)p_registerConditions;
- (id)p_basicConditions;
- (void)registerCondition:(id)a0;
- (id)p_businessConditions;
- (id)conditionsWithType:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)conditions;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
