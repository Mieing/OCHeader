@class NSMapTable;

@interface AWEDCFeedAutoPlayManager : NSObject

@property (retain, nonatomic) NSMapTable *autoPlayCardTable;

+ (id)shareInstance;

- (void)didResignActiveWithCard:(id)a0 withHandler:(id)a1;
- (void)allResignNoActiveWithCard:(id)a0 withHandler:(id)a1;
- (void)didBecomeActiveWithCard:(id)a0 withHandler:(id)a1;
- (void)resetVideoViewWithAweme:(id)a0;
- (void)allResignActiveWithHandler:(id)a0;
- (void).cxx_destruct;
- (id)className;
- (void)registerHandler:(id)a0;

@end
