@class IESECGoodsCommentContext;

@interface IESECCommentMonitor : NSObject

@property (weak, nonatomic) IESECGoodsCommentContext *context;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)hmdTrackEvent:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void)reportErrorWithEventName:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void)reportStateChangeWithInfo:(id)a0;
- (void).cxx_destruct;

@end
