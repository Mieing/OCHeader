@class NSString;

@interface AWETaskSpreadBizDowngradeInteractionDispatcher : AWETaskSpreadDispatcherBase <AWEPlayVideoMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)cancelDispatchOnRightContainer;
- (void)_updateFitstFrameDelayTime;
- (void)execute;
- (id)init;

@end
