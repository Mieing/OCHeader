@class NSString;

@interface MessageMinimizeHandler : MinimizeTaskBaseLogicController <MsgImgFullScreenViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMessageCanAddToStar:(id)a0;
+ (id)genMinimizeTaskDataForMsg:(id)a0;

- (BOOL)onEnterMinimizedTask:(id)a0 openContext:(id)a1 taskEnterScene:(unsigned int)a2;
- (BOOL)canDirectLaunchInMainFrame:(id)a0;

@end
