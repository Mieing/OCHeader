@class NSString;

@interface IESIMSheetVCService : HTSService <IESIMSheetVCService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)basicSheetWithRootVC:(id)a0 topType:(unsigned long long)a1 height:(double)a2;
- (id)basicSheetWithPanelView:(id)a0 topTitle:(id)a1;
- (id)basicSheetWithPanelView:(id)a0 topTitle:(id)a1 topType:(unsigned long long)a2 panelTopView:(id)a3;
- (id)contentSheetWithPanelView:(id)a0 topTitle:(id)a1 topType:(unsigned long long)a2 panelTopView:(id)a3;
- (id)contentSheetWithRootVC:(id)a0 topType:(unsigned long long)a1;
- (id)contentSheetWithRootVC:(id)a0 topType:(unsigned long long)a1 height:(double)a2;
- (id)partialSheetWithRootVC:(id)a0;
- (id)basicSheetWithRootVC:(id)a0 topType:(unsigned long long)a1;
- (unsigned long long)p_duxBasicSheetTopTypeWithIESIMType:(unsigned long long)a0;

@end
