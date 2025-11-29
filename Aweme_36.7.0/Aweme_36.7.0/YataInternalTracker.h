@class NSMutableDictionary;

@interface YataInternalTracker : YataModule

@property (retain, nonatomic) NSMutableDictionary *prefixedAllowedBizParams;

- (void)trackEvent:(id)a0 params:(id)a1;
- (id)initWithYataInstance:(id)a0;
- (void)injectBizCommonParams:(id)a0;
- (void)p_trackEvent:(id)a0 rawParams:(id)a1;
- (void).cxx_destruct;

@end
