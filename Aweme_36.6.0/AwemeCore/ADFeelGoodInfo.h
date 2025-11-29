@class NSString, NSDictionary, NSURL, NSDate;

@interface ADFeelGoodInfo : NSObject

@property (copy, nonatomic) NSString *taskID;
@property (retain, nonatomic) NSDictionary *triggerResult;
@property (nonatomic, getter=isGlobalDialog) BOOL globalDialog;
@property (retain, nonatomic) NSDictionary *taskSetting;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSDictionary *webviewParams;
@property (retain, nonatomic) NSDate *requestTimeoutAt;
@property (copy, nonatomic) id /* block */ enableOpenBlock;
@property (copy, nonatomic) id /* block */ willOpenBlock;
@property (copy, nonatomic) id /* block */ didOpenBlock;
@property (copy, nonatomic) id /* block */ didStopLoadingBlock;
@property (copy, nonatomic) id /* block */ didCloseBlock;
@property (copy, nonatomic) NSString *taskID;
@property (retain, nonatomic) NSDictionary *triggerResult;
@property (nonatomic, getter=isGlobalDialog) BOOL globalDialog;

+ (id)createInfoModel:(id)a0 triggerResult:(id)a1 globalDialog:(BOOL)a2;

- (void)setDidCloseBlock:(id /* block */)a0;
- (id)webviewParams;
- (id)taskSetting;
- (id)requestTimeoutAt;
- (id /* block */)willOpenBlock;
- (id /* block */)didOpenBlock;
- (id /* block */)didCloseBlock;
- (id /* block */)enableOpenBlock;
- (void)setWebviewParams:(id)a0;
- (void)setTaskSetting:(id)a0;
- (void)setRequestTimeoutAt:(id)a0;
- (void)setWillOpenBlock:(id /* block */)a0;
- (void)setDidOpenBlock:(id /* block */)a0;
- (void)setEnableOpenBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setUrl:(id)a0;
- (id)url;

@end
