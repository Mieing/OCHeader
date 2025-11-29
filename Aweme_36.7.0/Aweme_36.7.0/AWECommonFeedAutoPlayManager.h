@class NSMapTable;

@interface AWECommonFeedAutoPlayManager : NSObject

@property (retain, nonatomic) NSMapTable *autoPlaySectionTable;

+ (BOOL)shouldAutoPlayHandlerExclude;
+ (id)shareInstance;

- (void)allResignActiveWithHandler:(id)a0;
- (void)didResignActiveWithSection:(id)a0 withHandler:(id)a1;
- (void)didBecomeActiveWithSection:(id)a0 withHandler:(id)a1;
- (void).cxx_destruct;
- (void)registerHandler:(id)a0;

@end
