@class NSString, AWEIMChatPanelModel;

@interface AWEIMMessageListLocationEntryComponent : AWEIMComponentBase <AWEIMMessageListPlusPanelRegistry, AWEIMMessageListViewControllerAction, AWEIMMessageListLocationEntryInterface>

@property (retain, nonatomic) AWEIMChatPanelModel *plusPanelItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (BOOL)canShowInPlusPanelWithContext:(id)a0;
- (id)plusPanelItemModel;
- (void)p_onItemDidSelectedFromChatPanel;
- (void)didClickShareLocation:(id)a0;
- (void)cellDidTapped:(id)a0 withMessage:(id)a1 extraParams:(id)a2;
- (void)p_transferToLocationPageWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 enterMethod:(id)a1;
- (void).cxx_destruct;

@end
