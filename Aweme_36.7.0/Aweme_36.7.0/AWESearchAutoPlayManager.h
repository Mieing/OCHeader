@class NSMapTable;

@interface AWESearchAutoPlayManager : NSObject

@property (retain, nonatomic) NSMapTable *autoPlayCardTable;
@property (nonatomic) BOOL disableCheckActiveBeforeResign;

+ (BOOL)shouldAutoPlayHandlerExclude;
+ (id)shareInstance;

- (void)didResignActiveWithCard:(id)a0 withHandler:(id)a1;
- (void)didBecomeActiveWithCard:(id)a0 withHandler:(id)a1;
- (void)allResignActiveWithHandler:(id)a0;
- (void).cxx_destruct;
- (void)registerHandler:(id)a0;

@end
