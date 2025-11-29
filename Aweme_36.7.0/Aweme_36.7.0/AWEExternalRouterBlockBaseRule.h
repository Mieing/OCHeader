@interface AWEExternalRouterBlockBaseRule : NSObject

@property (nonatomic) long long ruleType;

- (BOOL)needBlockURLString:(id)a0 context:(id)a1 userActivity:(id)a2 linkSession:(id)a3;
- (void)handleURLString:(id)a0 context:(id)a1 scene:(id)a2 linkSession:(id)a3 completion:(id /* block */)a4;
- (id)syncHandleURLString:(id)a0 context:(id)a1 scene:(id)a2 linkSession:(id)a3;

@end
