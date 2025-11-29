@protocol BDPSplashAdProtocol;

@interface BDPSplashAdService : NSObject

@property (class, retain, nonatomic) Class splashAdImplClass;

@property (retain, nonatomic) id<BDPSplashAdProtocol> splashAdImpl;

- (id)initWithUniquedId:(id)a0;
- (void).cxx_destruct;

@end
