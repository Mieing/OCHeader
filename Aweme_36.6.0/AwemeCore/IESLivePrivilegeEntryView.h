@interface IESLivePrivilegeEntryView : IESLiveUserEnterBaseView

@property (copy, nonatomic) id /* block */ playCompletion;

- (BOOL)needHideFromRight;
- (void)startLeavingAnimationOn:(id)a0 shouldReduceFPS:(BOOL)a1;
- (BOOL)needEnterFromLeft;
- (void).cxx_destruct;

@end
