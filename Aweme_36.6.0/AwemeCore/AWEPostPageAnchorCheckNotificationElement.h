@class DUXBottomNotification;

@interface AWEPostPageAnchorCheckNotificationElement : AWEPostPageElement

@property (retain, nonatomic) DUXBottomNotification *hintView;

+ (void)_aweLazyRegisterPostPage;
+ (Class)featureConfigClass:(id)a0;
+ (id)type;

- (void)elementAppear;
- (void)bindServices:(id)a0;
- (BOOL)forceReceiveEvents;
- (void)showNewHintViewIfNeeded:(id)a0 anchorVM:(id)a1;
- (void)showBottomNoticeIfNeeded:(id)a0 anchorVM:(id)a1;
- (void)showAlertDialogIfNeeded:(id)a0 anchorVM:(id)a1;
- (void)showHintViewIfNeeded:(id)a0 anchorVM:(id)a1;
- (id)createActionWithNoticeButton:(id)a0 style:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)isVisible;
- (id)anchor;

@end
