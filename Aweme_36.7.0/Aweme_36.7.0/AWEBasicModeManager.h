@class NSString;

@interface AWEBasicModeManager : NSObject <AWEUserMessage, AWEBasicModeManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL basicModeStatus;

+ (id)sharedManager;

- (void)didFinishLoginWithUid:(id)a0;
- (BOOL)shouldHaveBasicModeEnterance;
- (void)setEventEnable:(BOOL)a0;
- (void)uploadBasicModeStatus:(BOOL)a0;
- (void)trackEventBasicModeStatus;
- (void)setBasicModeStatus:(BOOL)a0 completion:(id /* block */)a1;
- (void)trackBasicModeActionWithType:(unsigned long long)a0;
- (void)showToast:(id)a0;
- (id)init;
- (void)dealloc;

@end
