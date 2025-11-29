@class PAGView, NSString;

@interface MMFinderLiveOperationBottomButtonAnimator : NSObject <PAGViewListener>

@property (retain, nonatomic) PAGView *pagView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playPAGAnimationOnButton:(id)a0 pagPath:(id)a1 pagWebUrl:(id)a2 completion:(id /* block */)a3;
- (id)createCommonPAGView;
- (id)getAddedPAGViewForButton:(id)a0;
- (BOOL)isButtonRunningAnimation:(id)a0;
- (void)stopButtonAnimation:(id)a0;
- (id)getButtonRunningAnimationUrl:(id)a0;
- (void)onAnimationEnd:(id)a0;
- (void)replaceButtonIcon:(id)a0 withImage:(id)a1;
- (void).cxx_destruct;

@end
