@class UIWindow, NSString, CSJAdInfoViewModel, NSObject;
@protocol CSJSKOverlayManagerDelegate;

@interface CSJSKOverlayManager : NSObject <CSJSKOverlayCallBackDelegate>

@property (weak, nonatomic) UIWindow *window;
@property (weak, nonatomic) NSObject<CSJSKOverlayManagerDelegate> *delegate;
@property (nonatomic) BOOL hadShowSKOverlay;
@property (retain, nonatomic) CSJAdInfoViewModel *indexModel;
@property (nonatomic) BOOL shouldReopen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showOverlayWithSKANModel:(id)a0;
+ (void)reShowOverlayWithIndexModel;
+ (BOOL)hadShowSKOverlay;
+ (void)setDelegateObjct:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)shareInstance;
+ (void)dismissOverlay;

- (void)registerNotification;
- (void)appstoreDidAppear:(id)a0;
- (void)appstoreDidDisAppear:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)storeOverlay:(id)a0 willStartPresentation:(id)a1;
- (void)storeOverlay:(id)a0 didFinishPresentation:(id)a1;
- (void)storeOverlay:(id)a0 willStartDismissal:(id)a1;
- (void)storeOverlay:(id)a0 didFinishDismissal:(id)a1;
- (void)storeOverlay:(id)a0 didFailToLoadWithError:(id)a1;

@end
