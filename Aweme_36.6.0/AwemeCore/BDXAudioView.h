@class NSString, BDXAudioViewController;
@protocol BDXAudioViewLifeCycleDelegate;

@interface BDXAudioView : UIView <BDXAudioViewControllerDelegate>

@property (retain, nonatomic) BDXAudioViewController *lifeCycleVc;
@property (weak, nonatomic) id<BDXAudioViewLifeCycleDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
