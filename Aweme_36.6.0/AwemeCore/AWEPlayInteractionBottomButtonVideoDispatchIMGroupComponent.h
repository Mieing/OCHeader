@class NSString, AWEPageContext, AWEPlayInteractionBottomButtonVideoDispatchIMGroupButtonView, AWEPlayInteractionBottomButtonVideoDispatchIMGroupViewModel, AWECommonButtonInfoModel;
@protocol AWEPlayInteractionContextProtocol, AWEPlayInteractionBottomButtonContextProtocol, AWEPlayInteractionBottomButtonComponentDelegateProtocol;

@interface AWEPlayInteractionBottomButtonVideoDispatchIMGroupComponent : NSObject <AWEPlayInteractionBottomButtonComponentProtocol>

@property (retain, nonatomic) id<AWEPlayInteractionContextProtocol> context;
@property (retain, nonatomic) AWECommonButtonInfoModel *infoModel;
@property (retain, nonatomic) AWEPlayInteractionBottomButtonVideoDispatchIMGroupViewModel *viewModel;
@property (retain, nonatomic) AWEPlayInteractionBottomButtonVideoDispatchIMGroupButtonView *groupDispatchButton;
@property (nonatomic) long long avoidStatus;
@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionBottomButtonContextProtocol> *btnContext;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonComponentDelegateProtocol> componentDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowButtonForModel:(id)a0 context:(id)a1;

- (void)handleClickEventWithModel:(id)a0 clickBlock:(id /* block */)a1;
- (id)initWithModel:(id)a0 context:(id)a1;
- (long long)activateType;
- (id)bizParamsForShowEventTrack;
- (id)bizParamsForClickEventTrack;
- (void).cxx_destruct;
- (id)buttonView;

@end
