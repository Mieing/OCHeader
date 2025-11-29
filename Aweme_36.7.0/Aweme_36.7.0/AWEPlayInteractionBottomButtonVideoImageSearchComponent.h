@class NSString, AWEPageContext, UIView, AWECommonButtonInfoModel;
@protocol AWEPlayInteractionBottomButtonViewProtocol, AWEPlayInteractionBottomButtonContextProtocol, AWEPlayInteractionBottomButtonComponentDelegateProtocol, AWEPlayInteractionContextProtocol;

@interface AWEPlayInteractionBottomButtonVideoImageSearchComponent : NSObject <AWEPlayInteractionBottomButtonComponentProtocol>

@property (retain, nonatomic) AWECommonButtonInfoModel *infoModel;
@property (weak, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (retain, nonatomic) UIView<AWEPlayInteractionBottomButtonViewProtocol> *buttonView;
@property (nonatomic) long long avoidStatus;
@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionBottomButtonContextProtocol> *btnContext;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonComponentDelegateProtocol> componentDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowButtonForModel:(id)a0 context:(id)a1;

- (void)hideBottomButton;
- (void)handleClickEventWithModel:(id)a0 clickBlock:(id /* block */)a1;
- (id)initWithModel:(id)a0 context:(id)a1;
- (long long)activateType;
- (void)handleClickEventWithUnitModel:(id)a0 position:(long long)a1;
- (id)getReportParamsWithUnitModel:(id)a0 atIndex:(long long)a1;
- (void).cxx_destruct;

@end
