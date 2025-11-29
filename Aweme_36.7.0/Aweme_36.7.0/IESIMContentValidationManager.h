@class NSString;

@interface IESIMContentValidationManager : NSObject <IESIMContentValidationManagerProtocol>

@property (copy, nonatomic) id /* block */ contentValidationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)p_hook;
+ (void)p_swizzleInstanceMethod:(SEL)a0 with:(SEL)a1 fromClass:(Class)a2;
+ (void)initialize;

- (void)setupWithContentValidationBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
