@class MMFinderLiveGlobalRankSignView;

@interface MMFinderLiveGlobalRankSignRecordInfo : NSObject

@property (weak, nonatomic) MMFinderLiveGlobalRankSignView *rankSignView;
@property (copy, nonatomic) id /* block */ invokeCallback;
@property (copy, nonatomic) id /* block */ autoEndInvokeCallback;
@property (nonatomic) double maxDuration;

- (void)startInvokeAnimation;
- (void)endInvokeAnimation;
- (void)autoEndInvoke;
- (void).cxx_destruct;

@end
