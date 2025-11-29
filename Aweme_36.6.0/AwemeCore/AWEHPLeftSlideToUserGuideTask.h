@class NSString, AWEAlertCallbackWrapper, AWEHPLeftSlideToUserGuideViewController, NSMutableArray;

@interface AWEHPLeftSlideToUserGuideTask : NSObject

@property (nonatomic) long long taskID;
@property (nonatomic) BOOL isValid;
@property (retain, nonatomic) NSMutableArray *showHandlers;
@property (retain, nonatomic) NSMutableArray *dismissHandlers;
@property (retain, nonatomic) NSMutableArray *completionHandlers;
@property (nonatomic) long long guideType;
@property (readonly, nonatomic) BOOL isShowing;
@property (readonly, nonatomic) BOOL shown;
@property (copy, nonatomic) NSString *componentID;
@property (retain, nonatomic) AWEAlertCallbackWrapper *alertCallBackWrapper;
@property (retain, nonatomic) AWEHPLeftSlideToUserGuideViewController *guideVC;

- (void)notifyShowWithResult:(BOOL)a0;
- (void)registerDismissHandler:(id /* block */)a0;
- (void)registerShowHandler:(id /* block */)a0;
- (void)registerCompletionHandler:(id /* block */)a0;
- (void)notifyDismiss;
- (void)p_notifyTaskComplete;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
