@class NSString;

@interface AWEACCToastImpl : NSObject <ACCToastProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showNetWeak;
- (void)showAtTooMore;
- (void)showDraftPublishAndForceUseLocal:(BOOL)a0;
- (void)show:(id)a0 onView:(id)a1;
- (void)showError:(id)a0 onView:(id)a1;
- (void)showSuccess:(id)a0 onView:(id)a1;
- (void)showDebugToast:(id)a0;
- (void)showMultiLine:(id)a0 onView:(id)a1;
- (void)dismissToast;
- (void)showToast:(id)a0;
- (void)show:(id)a0;
- (void)showError:(id)a0;
- (void)showSuccess:(id)a0;

@end
