@class NSString;

@interface AWERecordCloseCoordinator : NSObject <FPCoordinator>

@property (nonatomic) unsigned long long closeEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)transitionFrom:(id)a0 scopeContext:(id)a1;

@end
