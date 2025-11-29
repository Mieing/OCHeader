@class NSMutableDictionary, AWESearchElementReuseConfig;

@interface AWESearchElementReusePool : NSObject

@property (retain, nonatomic) AWESearchElementReuseConfig *config;
@property (retain, nonatomic) NSMutableDictionary *reusePool;

+ (id)sharedInstance;

- (void)clearReusePool;
- (id)initWithReuseConfig:(id)a0;
- (Class)classWithIdentifier:(id)a0;
- (id)dequeueReusableSearchElementWithReuseContext:(id)a0;
- (void)stashReusableSearchElement:(id)a0;
- (void).cxx_destruct;

@end
