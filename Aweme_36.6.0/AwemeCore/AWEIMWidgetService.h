@class NSString;

@interface AWEIMWidgetService : HTSService <AWEIMWidgetService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkWidgetInstalledWithKind:(id)a0 completion:(id /* block */)a1;
- (void)showGuidePopupViewWithGuideImagePath:(id)a0 pipGuideVideoPath:(id)a1 conversationContext:(id)a2 dismissBlock:(id /* block */)a3;
- (id)widgets;

@end
