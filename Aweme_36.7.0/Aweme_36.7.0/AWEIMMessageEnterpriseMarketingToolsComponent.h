@class NSString, AWEIMChatPanelModel, UIView;
@protocol IESIMLoadingViewProtocol;

@interface AWEIMMessageEnterpriseMarketingToolsComponent : AWEIMComponentBase <AWEIMMessageEnterpriseMarketingToolsInterface, AWEIMMessageListPlusPanelRegistry>

@property (retain, nonatomic) UIView<IESIMLoadingViewProtocol> *businessLoadingView;
@property (nonatomic) BOOL isRequestingFlag;
@property (retain, nonatomic) AWEIMChatPanelModel *plusPanelItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (BOOL)canShowInPlusPanelWithContext:(id)a0;
- (id)plusPanelItemModel;
- (void)enterFECompanyComponent;
- (void)p_onItemDidSelectedFromChatPanel;
- (void)p_didStartEnterFECompanyComponent;
- (void)p_trackCompanyCompontent;
- (void)p_setupBusinessLoadingView;
- (void)p_dismissBusinessLoadingView;
- (void)fetchMarketingToolsResponseModelWithGroupChat:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
