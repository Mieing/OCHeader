@class DUXSingleSelectionPanel, NSString, DUXContentSheet, AWECodeGenLandingSwitchEditInfoModel;

@interface AWEProfileEditTabLandingPanelHelper : NSObject <DUXSingleSelectionPanelDelegate>

@property (retain, nonatomic) AWECodeGenLandingSwitchEditInfoModel *model;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (retain, nonatomic) DUXContentSheet *sheet;
@property (retain, nonatomic) DUXSingleSelectionPanel *panel;
@property (nonatomic) unsigned long long initIndex;
@property (nonatomic) BOOL isRequestOnAir;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)selectionPanel:(id)a0 optionNameAtRow:(long long)a1;
- (BOOL)selectionPanel:(id)a0 willClickRow:(long long)a1;
- (void)selectionPanel:(id)a0 didClickRow:(long long)a1;
- (void)showPanelWithEditModel:(id)a0 vc:(id)a1 actionHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
