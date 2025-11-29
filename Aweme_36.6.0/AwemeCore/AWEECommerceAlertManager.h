@class AWEBubble, NSString;

@interface AWEECommerceAlertManager : NSObject <AWEECAlertInterface, AWEAlertProtocol>

@property (retain, nonatomic) AWEBubble *bubbleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (BOOL)canShow;
- (void)showWithCloseCallback:(id /* block */)a0;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (void)dismissBubble;
- (BOOL)shouldShowAlert;
- (BOOL)isAlertShowing;
- (void)tapToDismissBubble;
- (BOOL)_presentBubbleWithTitle:(id)a0 imageUrl:(id)a1 andDuration:(double)a2 bubbleId:(unsigned long long)a3;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)prepareWithCompletion:(id /* block */)a0;
- (void)showAlert;

@end
