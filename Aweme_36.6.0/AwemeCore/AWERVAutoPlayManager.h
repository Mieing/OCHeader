@class NSMapTable;

@interface AWERVAutoPlayManager : NSObject

@property (retain, nonatomic) NSMapTable *autoPlayCardTable;

+ (id)shareInstance;

- (void)didResignActiveWithCard:(id)a0 withHandler:(id)a1;
- (void)didBecomeActiveWithCard:(id)a0 withHandler:(id)a1;
- (void)allResignActiveWithHandler:(id)a0;
- (void).cxx_destruct;
- (void)registerHandler:(id)a0;

@end
