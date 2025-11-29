@class UIStackView, NSArray, DUXLoadingCircleView, AWEPlayInteractionContext, NSString, AWEPlayInteractionTemplateButton;
@protocol AWEPlayInteractionBottomButtonViewDelegateProtocol;

@interface AWEPlayInteractionCoCreatorButtonView : UIView <AWEPlayInteractionBottomButtonViewProtocol>

@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonViewDelegateProtocol> delegate;
@property (retain, nonatomic) AWEPlayInteractionTemplateButton *acceptButton;
@property (retain, nonatomic) AWEPlayInteractionTemplateButton *refuseButton;
@property (retain, nonatomic) DUXLoadingCircleView *loadingView;
@property (copy, nonatomic) NSArray *configGroup;
@property (weak, nonatomic) AWEPlayInteractionContext *context;
@property (retain, nonatomic) UIStackView *groupView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startLoading:(id)a0;
- (id)buttonArray;
- (void)setupBinding;
- (void)setupGroup;
- (void)playFlashAnimationIfNeeded;
- (id)initWithConfigGroup:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (void)stopLoading:(id)a0;

@end
