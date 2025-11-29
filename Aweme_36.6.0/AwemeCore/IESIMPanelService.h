@class NSString;

@interface IESIMPanelService : HTSService <IESIMPanelService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createInfoPanel;
- (id)singleSelectionPanelWithRowCount:(long long)a0 selectedIndex:(long long)a1 delegate:(id)a2;

@end
