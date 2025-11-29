@class NSString, IESIMButton;

@interface AWEIMMessageListNaviBarConfirmComponent : AWEIMComponentBase <AWEIMMessageListNaviBarViewProvider, AWEIMMessageListNaviBarConfirmInterface>

@property (retain, nonatomic) IESIMButton *confirmButton;
@property (copy, nonatomic) id /* block */ confirmCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewWillAppear;
- (long long)naviBarPriority;
- (id)naviBarView;
- (long long)naviBarPosition;
- (void)componentDidMounted:(id)a0;
- (void)p_updateUI;
- (void)updateWithConfirmCompletion:(id /* block */)a0;
- (void)p_confirmButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
