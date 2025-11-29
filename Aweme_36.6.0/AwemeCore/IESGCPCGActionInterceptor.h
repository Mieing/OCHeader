@class NSString;

@interface IESGCPCGActionInterceptor : NSObject <IESGCPCGInterceptor>

@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interceptorWithName:(id)a0 priority:(long long)a1 action:(id /* block */)a2;

- (void)doInterceptWithContext:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
