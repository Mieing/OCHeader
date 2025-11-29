@class NSString, AWEPageContext;
@protocol AWEPlayInteractionContextProtocol;

@interface AWEPlayInteractionCommerceViewModel : AWEPlayInteractionBaseViewModel <AWEPlayInteractionCommerceViewModelProtocol>

@property (readonly, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onPoiCardClicked:(id)a0;
- (void)router_onPoiLabelClicked:(id)a0 enterMethod:(id)a1;
- (void)onPoiCardClicked_IMP:(id)a0;
- (void)interactor_onPoiLabelClicked:(id)a0;

@end
