@class NSString;
@protocol AWEIMSecurityRemindTopTipManagerDelegate;

@interface AWEIMSecurityRemindTopTipManager : AWEIMSecurityRemindBaseManager <AWEIMSafeRemindViewDelegate, AWEIMSkyEyeFloatTipInteractorDelegate, AWEIMMessageListSecurityComponentDelegate>

@property (weak, nonatomic) id<AWEIMSecurityRemindTopTipManagerDelegate> topTipDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventName;

- (void)skyEyeFloatTipComponent:(id)a0 didClickButtonWithModel:(id)a1;
- (void)skyEyeFloatTipComponentDidClickCloseButton:(id)a0;
- (void)skyEyeFloatTipComponent:(id)a0 floatViewDidShow:(id)a1;
- (void)safeRemindView:(id)a0 onNextExam:(long long)a1;
- (id)currentConfigForConversation:(id)a0;
- (void)requestConfigWithParams:(id)a0 onComplete:(id /* block */)a1;
- (void)reportStatusWithParams:(id)a0;
- (BOOL)showViewWithModel:(id)a0;
- (void)setNextShowViewTimeInConversation;
- (id)paramsForReportStatusWithConversation:(id)a0 remindState:(unsigned long long)a1 config:(id)a2 buttonModel:(id)a3 didClickCloseButton:(BOOL)a4;
- (BOOL)showSecurityTipView:(id)a0;
- (BOOL)p_showSecurityTipView:(id)a0 needFrequencyControl:(BOOL)a1 buttonModel:(id)a2;
- (void)skyEyeFloatTipInteractor:(id)a0 didClickButtonWithModel:(id)a1;
- (void)skyEyeFloatTipInteractorDidClickCloseButton:(id)a0;
- (void)skyEyeFloatTipInteractor:(id)a0 floatViewDidShow:(id)a1;
- (void).cxx_destruct;

@end
