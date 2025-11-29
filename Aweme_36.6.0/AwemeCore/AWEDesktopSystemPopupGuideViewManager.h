@class NSString;

@interface AWEDesktopSystemPopupGuideViewManager : HTSService <AWEDesktopSystemPopupGuideViewManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)showPopupGuideViewWithModel:(id)a0 actionDelegate:(id)a1 dismissCompletion:(id /* block */)a2;
- (id)showPopupGuideViewWithModel:(id)a0 actionDelegate:(id)a1 controller:(id)a2 dismissCompletion:(id /* block */)a3;
- (void)startPictureInPictureWithModel:(id)a0;

@end
