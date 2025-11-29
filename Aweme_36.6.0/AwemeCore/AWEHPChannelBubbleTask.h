@class AWEHomePageBubbleTask, NSMutableDictionary, NSDictionary, AWEHPBubbleCallContext, NSNumber;
@protocol AWEPzComponentProtocol, AWEPzVerifyResultProtocol;

@interface AWEHPChannelBubbleTask : NSObject

@property (nonatomic) long long taskID;
@property (nonatomic) BOOL isValid;
@property (nonatomic) BOOL isShowing;
@property (copy, nonatomic) NSNumber *precheckResult;
@property (nonatomic) long long showTimeStamp;
@property (nonatomic) long long CAMediaShowTimeStamp;
@property (nonatomic) long long hideTimeStamp;
@property (nonatomic) BOOL hasInvokeShowBlock;
@property (nonatomic) BOOL hasInvokeClickBlock;
@property (nonatomic) BOOL hasInvokeDismissBlock;
@property (nonatomic) BOOL hasInvokePreCheckBlock;
@property (retain, nonatomic) NSMutableDictionary *verifyExtraDict;
@property (readonly, nonatomic) BOOL didClick;
@property (nonatomic) BOOL isPreCheck;
@property (retain, nonatomic) NSDictionary *interceptedParams;
@property (retain, nonatomic) AWEHPBubbleCallContext *context;
@property (retain, nonatomic) AWEHomePageBubbleTask *holdingTask;
@property (copy, nonatomic) id /* block */ preCheckBlock;
@property (copy, nonatomic) id /* block */ showBlock;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ popViewCloseBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) BOOL hasEnterConsume;
@property (nonatomic) BOOL hasEnvWaiting;
@property (nonatomic) BOOL hasVerifyPizza;
@property (nonatomic) BOOL visibleWhenShow;
@property (nonatomic) BOOL didVisibleDurationShow;
@property (nonatomic) long long enterForegroundTimeStamp;
@property (nonatomic) long long pizzaVerifyTimeStamp;
@property (retain, nonatomic) id<AWEPzComponentProtocol> component;
@property (retain, nonatomic) id<AWEPzVerifyResultProtocol> verifyResult;

+ (id)createTask;

- (void)updatePrecheckResultIfNeeded:(id)a0;
- (void)addExtraInfoWithError:(id)a0 extraInfo:(id)a1;
- (id)generateResultModelWithResult:(long long)a0;
- (void)completionWithSuccess:(BOOL)a0;
- (void)dismissWithReason:(long long)a0;
- (void)showWithResult:(long long)a0;
- (void)updateTaskID:(long long)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)cancel;
- (void)click;

@end
