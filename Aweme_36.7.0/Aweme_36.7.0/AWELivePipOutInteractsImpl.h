@class NSString;

@interface AWELivePipOutInteractsImpl : NSObject <AWERTVMessage, AWEDigitalWellbeingMessage, AWEUserMessage, IESLivePipOutInteracts>

@property (nonatomic) BOOL hasListeners;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)rtvServiceWillBegin:(id)a0;
- (void)rtvServiceDidBegin:(id)a0;
- (void)rtvServiceWillFinish:(id)a0;
- (void)rtvServiceDidFinish:(id)a0;
- (void)handleAntiAddictEnterNotification;
- (void)p_stopPip;
- (void)addListeners;
- (void)dealloc;
- (void)removeListeners;

@end
