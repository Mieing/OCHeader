@class NSString, NSDictionary;

@interface BDUGLuckyRouterContext : NSObject

@property (copy, nonatomic) NSString *originUrl;
@property (copy, nonatomic) NSString *currentUrl;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (nonatomic) BOOL alreadyHandle;
@property (copy, nonatomic) id /* block */ routerCompletion;
@property (copy, nonatomic) id /* block */ routerContextCompletion;
@property (nonatomic) double routingStartTime;

- (id)initWithUrl:(id)a0 extraParams:(id)a1 contextCompletion:(id /* block */)a2;
- (void)finishWithResult:(BOOL)a0 errorInfo:(id)a1;
- (void)setupData:(id)a0 extraParams:(id)a1;
- (id)initWithUrl:(id)a0 completion:(id /* block */)a1;
- (id)initWithUrl:(id)a0 contextCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
