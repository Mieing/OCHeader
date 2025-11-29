@class NSString;

@interface AWEIMSecurityRemindManager : AWEIMSecurityRemindBaseManager <AWEIMSafeRemindViewDelegate, AWEIMSecurityRemindManagerInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)__trackEvenShowScene:(id)a0;
+ (void)__trackEventClickWithScene:(id)a0 reportValue:(id)a1;
+ (id)sharedInstance;
+ (id)eventName;

- (BOOL)showPopupWithPopupDictData:(id)a0 conversation:(id)a1 pageIdentifier:(id)a2 viewController:(id)a3;
- (void)safeRemindView:(id)a0 didClickButtonWithModel:(id)a1;
- (void)safeRemindView:(id)a0 onNextExam:(long long)a1;
- (id)currentConfigForConversation:(id)a0;
- (BOOL)p_showViewWithModel:(id)a0 toastInfo:(id)a1;
- (void)requestConfigWithParams:(id)a0 onComplete:(id /* block */)a1;
- (void)reportStatusWithParams:(id)a0;
- (BOOL)showViewWithModel:(id)a0;
- (void)p_finishCurrentToast;
- (void)setNextShowViewTimeInConversation;
- (BOOL)p_showSecurityPopupView:(id)a0 needFrequencyControl:(BOOL)a1 buttonModel:(id)a2;
- (BOOL)showSecurityPopupView:(id)a0;
- (BOOL)isShowing;
- (void)dealloc;

@end
