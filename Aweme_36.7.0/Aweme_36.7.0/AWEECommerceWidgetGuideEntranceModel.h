@class NSString, NSDictionary, NSTimer, UIViewController;

@interface AWEECommerceWidgetGuideEntranceModel : NSObject

@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *showFrom;
@property (nonatomic) long long showLevel;
@property (nonatomic) BOOL needLoading;
@property BOOL isWaiting;
@property (readonly, nonatomic) BOOL needWait;
@property (readonly, nonatomic) double maxWaitInterval;
@property (retain, nonatomic) NSTimer *interceptorTimer;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) long long toolType;
@property (readonly, nonatomic) BOOL interceptorHasEnd;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (weak, nonatomic) UIViewController *currentPage;
@property (copy, nonatomic) NSString *recommendLevel;

- (id)initWithScene:(id)a0 params:(id)a1;
- (void)startInterceptorIfNeeded;
- (void)invokeCompletionIfNeededWithScene:(id)a0 enterFrom:(id)a1 result:(BOOL)a2 extra:(id)a3;
- (BOOL)checkEvadeIfNeededWithScene:(id)a0 enterFrom:(id)a1;
- (id)showFromParams:(id)a0;
- (BOOL)checkValidWithScene:(id)a0 enterFrom:(id)a1;
- (void)invokeCompletionWithResult:(BOOL)a0 extra:(id)a1;
- (void)trackerGuideShowWithResult:(BOOL)a0 hasIntercepted:(BOOL)a1;
- (void).cxx_destruct;

@end
