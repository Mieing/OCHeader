@class NSString, NSDictionary, NSMutableArray, AWEHPBottomTabLottieParams;

@interface AWEHPBottomTabLottieTask : NSObject <AWEHPTabLottieTaskProtocol>

@property (retain, nonatomic) NSMutableArray *showBlocks;
@property (retain, nonatomic) NSMutableArray *hideBlocks;
@property (retain, nonatomic) NSMutableArray *completionBlocks;
@property (nonatomic) long long status;
@property (copy, nonatomic) id /* block */ canShowCallBack;
@property (retain, nonatomic) NSString *channelID;
@property (retain, nonatomic) AWEHPBottomTabLottieParams *params;
@property (copy, nonatomic) NSDictionary *hambLottieConfig;
@property (readonly, nonatomic) long long position;
@property (readonly, copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) id /* block */ hideCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tryShowLottieWithCanShowCallBack:(id /* block */)a0;
- (void)closeTaskWithCompletionSuccess:(BOOL)a0;
- (void)retryShowLottie;
- (void)pushShowBlock:(id /* block */)a0;
- (void)pushHideBlock:(id /* block */)a0;
- (void)pushCompletionBlock:(id /* block */)a0;
- (void)showWithResult:(long long)a0 error:(id)a1;
- (void)hideWithReason:(long long)a0;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)init;

@end
