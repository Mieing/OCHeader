@class AWEIMSecurityToastConfigResponse, AWEIMMessageConversation, NSDictionary, NSString, AWEIMSafeRemindView, UIViewController;
@protocol AWEIMSecurityRemindManagerDelegate;

@interface AWEIMSecurityRemindBaseManager : NSObject <AWEIMSafeRemindViewDelegate>

@property (retain, nonatomic) AWEIMSecurityToastConfigResponse *toastConfigResponse;
@property (retain, nonatomic) NSDictionary *toastInfo;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) NSString *pageIdentifier;
@property (retain, nonatomic) UIViewController *viewController;
@property (nonatomic, getter=isRequesting) BOOL requesting;
@property (weak, nonatomic) id<AWEIMSecurityRemindManagerDelegate> delegate;
@property (retain, nonatomic) AWEIMSafeRemindView *currentExamView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)paramModelByText:(id)a0 forModel:(id)a1;
+ (id)attrbutedStringWithTitle:(id)a0 color:(id)a1 highlightColor:(id)a2 font:(id)a3 needCenter:(BOOL)a4 config:(id)a5 conversation:(id)a6 lineSpacing:(double)a7;
+ (id)titleWithConfig:(id)a0 conversation:(id)a1;
+ (id)subTitleWithConfig:(id)a0 conversation:(id)a1;
+ (void)__trackEventWithEventName:(id)a0 actionType:(id)a1 linkType:(id)a2 config:(id)a3 conversation:(id)a4 reportValue:(id)a5;
+ (long long)__trackWindowType:(id)a0;
+ (id)__linkTypeForModel:(id)a0;
+ (void)trackEventActionType:(id)a0 linkType:(id)a1 config:(id)a2 conversation:(id)a3;
+ (void)trackButtonActionWithConfig:(id)a0 conversation:(id)a1 reportValue:(id)a2;
+ (BOOL)__checkValidScheme:(id)a0;
+ (BOOL)p_isReportURL:(id)a0;
+ (void)p_mergeStringWithMessages:(id)a0 toastString:(id)a1;
+ (void)trackAudioWithConfig:(id)a0 conversation:(id)a1 longestAudioPlayPercentage:(double)a2;
+ (id)eventName;
+ (id)executeActions:(id)a0;

- (void)requestConfigForConvseration:(id)a0;
- (void)safeRemindView:(id)a0 didClickButtonWithModel:(id)a1;
- (void)safeRemindViewDidDismiss:(id)a0;
- (void)safeRemindViewDidShowInterrupted:(id)a0;
- (void)safeRemindView:(id)a0 onNextExam:(long long)a1;
- (void)safeRemindViewDidClickCloseButton:(id)a0;
- (void)p_requestConfigForConvseration:(id)a0;
- (BOOL)shouldRequestConfigForConversation:(id)a0;
- (id)paramsForRequestingConfigWithConversation:(id)a0;
- (id)currentConfigForConversation:(id)a0;
- (BOOL)p_showViewWithModel:(id)a0 toastInfo:(id)a1;
- (void)requestConfigWithParams:(id)a0 onComplete:(id /* block */)a1;
- (void)reportStatusWithParams:(id)a0;
- (BOOL)showViewWithModel:(id)a0;
- (void)p_finishCurrentToast;
- (void)setNextShowViewTimeInConversation;
- (void)p_reportSecurityRemindResultForConvseration:(id)a0 remindState:(unsigned long long)a1 config:(id)a2 buttonModel:(id)a3 didClickCloseButton:(BOOL)a4;
- (void)p_reportSecurityRemindResultForConvseration:(id)a0 remindState:(unsigned long long)a1 config:(id)a2 buttonModel:(id)a3 didClickCloseButton:(BOOL)a4 finishToast:(BOOL)a5;
- (id)paramsForReportStatusWithConversation:(id)a0 remindState:(unsigned long long)a1 config:(id)a2 buttonModel:(id)a3 didClickCloseButton:(BOOL)a4;
- (id)valueForReportWithConfig:(id)a0 ButtonModel:(id)a1 didClickCloseButton:(BOOL)a2;
- (id)p_nextToastConfigWithIndex:(long long)a0 config:(id)a1;
- (void)p_showNextToastConfig:(id)a0 buttonModel:(id)a1;
- (void)closePopupWithToastConfig:(id)a0 buttonModel:(id)a1 didClickCloseButton:(BOOL)a2;
- (BOOL)p_showSecurityPopupView:(id)a0 needFrequencyControl:(BOOL)a1 buttonModel:(id)a2;
- (void)showNextPopupIfNeededWithToastConfig:(id)a0 buttonModel:(id)a1 nextIndex:(long long)a2 extraActionBlock:(id /* block */)a3;
- (id)p_executeButtonActions:(id)a0;
- (void)didClickButtonWithToastConfig:(id)a0 buttonModel:(id)a1;
- (void)didClickCloseButtonWithToastConfig:(id)a0;
- (void)didClickSingleButtonWithToastConfig:(id)a0 nextExam:(long long)a1 extraActionBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end
