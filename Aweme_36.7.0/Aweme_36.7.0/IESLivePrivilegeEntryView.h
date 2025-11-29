@interface IESLivePrivilegeEntryView : IESLiveUserEnterBaseView

@property (copy, nonatomic) id /* block */ playCompletion;

- (BOOL)needEnterFromLeft;
- (BOOL)needHideFromRight;
- (void)startLeavingAnimationOn:(id)a0 shouldReduceFPS:(BOOL)a1;
- (void).cxx_destruct;

@end
