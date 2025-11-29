@protocol IRISNetworkProvider;

@interface DIRSNetworking : DIRSBasicModule {
    unsigned long long requestId;
}

@property (retain, nonatomic) id<IRISNetworkProvider> provider;

+ (id)moduleId;
+ (id)moduleVersion;

- (void)syncUsingSchema:(id)a0 header:(id)a1 body:(id)a2 options:(id)a3 completion:(id /* block */)a4;
- (id)loadUserHTTPHeaderFields:(id)a0;
- (id)endpointUsingSchema:(id)a0 options:(id)a1 attempts:(long long)a2;
- (void)asyncUsingSchema:(id)a0 header:(id)a1 body:(id)a2 options:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)commonInit;
- (void)run;

@end
