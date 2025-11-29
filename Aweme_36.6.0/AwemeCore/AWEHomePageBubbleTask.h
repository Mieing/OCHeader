@class NSNumber, NSString;

@interface AWEHomePageBubbleTask : NSObject

@property (copy, nonatomic) NSNumber *precheckResult;
@property (readonly, nonatomic) long long taskID;
@property (readonly, nonatomic) BOOL isValid;
@property (nonatomic) BOOL isPrecheck;
@property (copy, nonatomic) NSString *verifyExtra;
@property (readonly, nonatomic) BOOL hasInvokeTryShowCallBack;
@property (readonly, nonatomic) BOOL hasInvokeReleaseCallBack;
@property (readonly, nonatomic) BOOL hasInvokePopViewCloseCallBack;
@property (nonatomic) double pendingTime;
@property (copy, nonatomic) NSString *businessID;
@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) id /* block */ tryShowCallBack;
@property (copy, nonatomic) id /* block */ releaseCallBack;
@property (copy, nonatomic) id /* block */ popViewCloseCallBack;

+ (id)createTask;

- (void)closeTask;
- (void)updatePrecheckResultIfNeeded:(id)a0;
- (void)invokeTryShowCallBackWithResult:(long long)a0;
- (void)invokeReleaseCallBack;
- (void)invokePopViewCloseCallBack;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithTaskID:(long long)a0;

@end
