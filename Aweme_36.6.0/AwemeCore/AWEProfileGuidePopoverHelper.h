@class NSString;
@protocol AWEProfileGuidePopoverHelperDelegate;

@interface AWEProfileGuidePopoverHelper : NSObject <AWEProfileGuidePopoverHelperProtocol>

@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ onClose;
@property (nonatomic) BOOL isOnCloseInvoked;
@property (weak, nonatomic) id<AWEProfileGuidePopoverHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)popoverDidDisappear:(id)a0;
- (void)configDelegate:(id)a0;
- (void)launchPopoverWithOnClose:(id /* block */)a0;
- (void)invokeOnClose:(BOOL)a0;
- (void)showPopoverWithAlertClass:(Class)a0 actionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
