@class NSString;

@interface AWEProfileEditFlowNicknameViewModel : AWEProfileEditFlowStepViewModel

@property (retain, nonatomic) NSString *enteredNickname;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *placeHolder;

- (id)trackFlowType;
- (void)trackImpression;
- (Class)stepViewClass;
- (BOOL)editingChanged:(id)a0;
- (void)p_trackGuideProfileNameWithEventType:(id)a0;
- (void).cxx_destruct;
- (id)impressionEvent;
- (void)finishWithCompletion:(id /* block */)a0;

@end
