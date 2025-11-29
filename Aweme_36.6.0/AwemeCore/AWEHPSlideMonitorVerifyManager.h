@class NSMutableDictionary;

@interface AWEHPSlideMonitorVerifyManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *reasonToVerifyConfig;
@property (retain, nonatomic) NSMutableDictionary *reasonVerifyRules;
@property (retain, nonatomic) NSMutableDictionary *actionVerifyRules;

+ (id)sharedInstance;

- (BOOL)verifyNonRespondReason:(id)a0 monitorModel:(id)a1;
- (BOOL)verifyGestureActionWithScene:(id)a0 context:(id)a1;
- (void)initReasonVerifyRules;
- (void)initActionVerifyRules;
- (void)initAllReasonVerifyConfig;
- (void)registerReason:(id)a0 withVerifyConfig:(id)a1;
- (BOOL)isUIView:(id)a0 ContainsSubView:(Class)a1;
- (void)registerReasonVerifyRule:(long long)a0 withBlock:(id /* block */)a1;
- (void)registerActionVerifyWithGestureScene:(id)a0 block:(id /* block */)a1;
- (BOOL)isUIViewController:(id)a0 containsChildViewController:(Class)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
