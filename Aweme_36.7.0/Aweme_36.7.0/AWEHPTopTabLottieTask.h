@class AWEHPChannelComponentContext, NSString, NSDictionary, AWEHPLottiePlayParams, NSMutableArray, AWEHPTopTabLottieParams;
@protocol AWEPzComponentProtocol;

@interface AWEHPTopTabLottieTask : NSObject <AWEHPTabLottieTaskProtocol>

@property (nonatomic) long long taskID;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSMutableArray *showBlocks;
@property (retain, nonatomic) NSMutableArray *hideBlocks;
@property (retain, nonatomic) NSMutableArray *completionBlocks;
@property (copy, nonatomic) id /* block */ canShowCallBack;
@property (retain, nonatomic) AWEHPTopTabLottieParams *lottieParams;
@property (retain, nonatomic) AWEHPLottiePlayParams *playParams;
@property (retain, nonatomic) AWEHPChannelComponentContext *context;
@property (weak, nonatomic) id<AWEPzComponentProtocol> component;
@property (copy, nonatomic) NSDictionary *hambLottieConfig;
@property (readonly, nonatomic) long long position;
@property (readonly, copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) id /* block */ hideCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createTask;

- (void)closeTask;
- (void)invokeHideBlockWithType:(long long)a0;
- (void)tryShowLottieWithCanShowCallBack:(id /* block */)a0;
- (void)retryShowLottie;
- (void)pushShowBlock:(id /* block */)a0;
- (void)pushHideBlock:(id /* block */)a0;
- (void)pushCompletionBlock:(id /* block */)a0;
- (void)invokeShowBlockWithResult:(long long)a0 error:(id)a1;
- (BOOL)canReUseComponentWithNewTask:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTaskID:(long long)a0;

@end
