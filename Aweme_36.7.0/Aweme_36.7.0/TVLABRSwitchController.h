@class NSDictionary;
@protocol TVLABRSwitching;

@interface TVLABRSwitchController : NSObject {
    struct shared_ptr<livecoreplayer::liveplayer::ABRSwitchController> { struct ABRSwitchController *__ptr_; struct __shared_weak_count *__cntrl_; } _ABRSwitchController;
}

@property (weak, nonatomic) id<TVLABRSwitching> ABRSwitcher;
@property (readonly, copy, nonatomic) NSDictionary *statisticsInfo;
@property (readonly, copy, nonatomic) NSDictionary *primaryStatisticsInfo;

- (void)handleABRStrategyDecision:(id)a0;
- (void)removeAllABRSwitches;
- (id)decisionInfoWithIdentifier:(long long)a0;
- (id)generateStatisticsInfo:(BOOL)a0;
- (id)initWithABRSwitcher:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;

@end
