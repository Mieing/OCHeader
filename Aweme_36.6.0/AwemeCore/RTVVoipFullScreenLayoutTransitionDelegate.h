@class NSString;

@interface RTVVoipFullScreenLayoutTransitionDelegate : NSObject <RTVXRLayoutTransitionDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutTransitionPrepare:(id)a0;
- (void)layoutTransitionWillBegin:(id)a0;
- (void)layoutTransitionDidBegin:(id)a0;

@end
