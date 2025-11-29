@class NSString, UIViewController;

@interface ACCRecordSelectMusicCoordinator : NSObject <FPCoordinator>

@property (weak, nonatomic) UIViewController *targetViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)transitionFrom:(id)a0 scopeContext:(id)a1;
- (void).cxx_destruct;

@end
