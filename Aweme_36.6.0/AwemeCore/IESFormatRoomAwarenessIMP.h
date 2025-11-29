@class NSString, UIViewController;

@interface IESFormatRoomAwarenessIMP : NSObject <UIGestureRecognizerDelegate, IESFormatRoomAwareness>

@property (weak, nonatomic) UIViewController *formatVC;
@property (copy, nonatomic) id /* block */ panPopDoneBlock;
@property (copy, nonatomic) id /* block */ shouldEnableInteractionGestureBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addRestoreSwipeGestureForRoom:(id)a0 shouldEnableInteractionGestureBlock:(id /* block */)a1 popDoneBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end
