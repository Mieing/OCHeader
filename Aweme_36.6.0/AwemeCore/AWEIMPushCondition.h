@class NSString;

@interface AWEIMPushCondition : NSObject <AWEIMPushConditionProtocol>

@property (copy, nonatomic) id /* block */ checkBlock;
@property (nonatomic) BOOL stable;
@property (nonatomic) long long type;
@property (nonatomic) long long targetType;
@property (nonatomic) long long execThreadType;
@property (nonatomic) BOOL enableParallel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)conditionWithBlock:(id /* block */)a0 type:(long long)a1 target:(long long)a2;

- (id)initWithBlock:(id /* block */)a0 type:(long long)a1 target:(long long)a2;
- (void).cxx_destruct;

@end
