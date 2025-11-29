@class NSDictionary, NSArray, NSString;

@interface AWEAdComponentActionModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long showSecond;
@property (nonatomic) BOOL showSecondForbidIncrease;
@property (nonatomic) long long adPriority;
@property (nonatomic) long long actionType;
@property (nonatomic) long long sourceType;
@property (copy, nonatomic) NSDictionary *subActions;
@property (copy, nonatomic) NSArray *blackList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
