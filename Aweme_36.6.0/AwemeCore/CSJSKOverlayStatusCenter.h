@class NSNumber;
@protocol CSJSKOverlayStatusDelegate;

@interface CSJSKOverlayStatusCenter : NSObject

@property BOOL begainAnalyse;
@property (retain) NSNumber *deactivationReason;
@property (weak, nonatomic) id<CSJSKOverlayStatusDelegate> delegate;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)shareInstance;

- (void)addNotification;
- (void)applicationDeactivationReasonUserInfoKey:(int)a0;
- (void)storeOverlayDidFailToLoadWithError:(id)a0;
- (void)storeOverlayDidFinishPresentation;
- (void)storeOverlayWillStartPresentation;
- (void)storeOverlayWillStartDismissal;
- (void)storeOverlayDidFinishDismissal;
- (void)applicationWillResignActive:(id)a0;
- (void)applicationResumed:(id)a0;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)a0;
- (void)applicationWillAddDeactivationReason:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
