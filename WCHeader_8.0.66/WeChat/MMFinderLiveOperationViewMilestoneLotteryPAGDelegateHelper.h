@class NSString;

@interface MMFinderLiveOperationViewMilestoneLotteryPAGDelegateHelper : NSObject <PAGViewListener>

@property (copy, nonatomic) id /* block */ animationEndCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAnimationEnd:(id)a0;
- (void).cxx_destruct;

@end
