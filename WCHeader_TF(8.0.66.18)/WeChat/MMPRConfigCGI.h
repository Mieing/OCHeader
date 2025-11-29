@class NSString;

@interface MMPRConfigCGI : WCBaseCgi

@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ failed;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *baseId;
@property (retain, nonatomic) NSString *pid;

- (id)initWithAppId:(id)a0 baseId:(id)a1 pid:(id)a2 isAutoCheck:(BOOL)a3 completionBlock:(id /* block */)a4 failed:(id /* block */)a5;
- (id)initWithPkgList:(id)a0 completionBlock:(id /* block */)a1 failed:(id /* block */)a2;
- (void)createRequest:(BOOL)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (id)getLiteAppConditions;
- (void).cxx_destruct;

@end
