@class NSString, UIView;
@protocol BDUGLuckyCountDownPendantViewProtocol;

@interface BDUGLuckyCountDownSimplePendantHelper : NSObject <BDUGLuckyCountDownPendantManagerProtocol, BDUGLuckyCountDownTaskPendantDelegateProtocol>

@property (retain, nonatomic) UIView<BDUGLuckyCountDownPendantViewProtocol> *pendant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preStartupRegisterScene;
+ (id)sharedInstance;
+ (id)serviceProtocol;

- (void)updateCurrentItemID:(id)a0;
- (id)__topView;
- (void)pendantIsReady;
- (void)pendantWillDestroy;
- (void).cxx_destruct;
- (void)hide;
- (void)show;

@end
