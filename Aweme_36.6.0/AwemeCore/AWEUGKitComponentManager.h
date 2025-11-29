@protocol AWEPzEngineProtocol;

@interface AWEUGKitComponentManager : NSObject

@property (retain, nonatomic) id<AWEPzEngineProtocol> engine;

+ (id)sharedManager;

- (void)tryShowUGComponentWithModel:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
