@protocol BDBCGeckoConfigProtocol;

@interface BDBCGeckoService : NSObject

@property (retain, nonatomic) id<BDBCGeckoConfigProtocol> config;
@property (nonatomic) BOOL isGeckoReady;

+ (id)sharedInstance;

- (id)geckoConfig;
- (void)setupServiceConfig:(id)a0;
- (void)syncGecko;
- (void)setupGeckoIfNeed;
- (id)geckoFilePathWithFileName:(id)a0 channel:(id)a1;
- (void)loadGeckoResourceForPath:(id)a0 channel:(id)a1 completion:(id /* block */)a2;
- (id)geckoRootDir;
- (id)geckoFilePathWithFileName:(id)a0;
- (void)loadGeckoResourceForPath:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
