@class AWEPlayInteractionCoCreatorButtonView, NSString, AWEPlayInteractionContext, AWEPageContext, UIView, AWECommonButtonInfoModel, NSObject;
@protocol AWEPlayInteractionBottomButtonComponentDelegateProtocol, AWEPlayInteractionBottomButtonComponentViewModelProtocol, AWEPlayInteractionBottomButtonContextProtocol, AWEPlayInteractionBottomButtonViewProtocol;

@interface AWEPlayInteractionBottomButtonCoCreatorComponent : NSObject <AWEPlayInteractionBottomButtonComponentProtocol>

@property (retain, nonatomic) AWECommonButtonInfoModel *infoModel;
@property (weak, nonatomic) AWEPlayInteractionContext *context;
@property (retain, nonatomic) UIView<AWEPlayInteractionBottomButtonViewProtocol> *buttonView;
@property (retain, nonatomic) NSObject<AWEPlayInteractionBottomButtonComponentViewModelProtocol> *viewModel;
@property (retain, nonatomic) AWEPlayInteractionCoCreatorButtonView *creatorButtonView;
@property (nonatomic) long long currentClickPosition;
@property (nonatomic) long long avoidStatus;
@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionBottomButtonContextProtocol> *btnContext;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonComponentDelegateProtocol> componentDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowButtonForModel:(id)a0 context:(id)a1;
+ (BOOL)shouldShowWithModel:(id)a0;

- (void)hideBottomButton;
- (void)handleClickEventWithModel:(id)a0 clickBlock:(id /* block */)a1;
- (id)initWithModel:(id)a0 context:(id)a1;
- (long long)activateType;
- (id)bizParamsForClickEventTrack;
- (void)handleRefuse;
- (void)handleAccept;
- (void).cxx_destruct;
- (void)updateUI;
- (id)setupButtonView;

@end
