@class TIMXTriggerCounterTPS, TIMXTriggerCounterTPW;

@interface TIMXTriggerCounter : NSObject

@property (nonatomic, getter=isTpsSatisfy) BOOL tpsSatisfy;
@property (nonatomic, getter=isTpwSatisfy) BOOL tpwSatisfy;
@property (retain, nonatomic) TIMXTriggerCounterTPW *tpw;
@property (retain, nonatomic) TIMXTriggerCounterTPS *tps;
@property (copy, nonatomic) id /* block */ tpsSatisfyChangedCallback;
@property (copy, nonatomic) id /* block */ tpwSatisfyChangedCallback;
@property (readonly, nonatomic) long long maxTPS;
@property (readonly, nonatomic) long long windowWidth;
@property (readonly, nonatomic) long long maxTPW;

- (id)initWithMaxTPS:(long long)a0 maxTPW:(long long)a1 windowWidth:(long long)a2 tpsSatisfyChangedCallback:(id /* block */)a3 tpwSatisfyChangedCallback:(id /* block */)a4;
- (long long)currentTPS;
- (long long)currentTPW;
- (void)p_enqueueTPS:(id)a0;
- (void)p_refreshSatisfy;
- (void)p_refreshTPSSatisfy;
- (void)p_refreshTPWSatisfy;
- (void).cxx_destruct;
- (void)refresh;
- (void)trigger;

@end
