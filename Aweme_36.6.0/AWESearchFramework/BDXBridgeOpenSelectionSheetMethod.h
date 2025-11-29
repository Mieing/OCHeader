@class NSString;

@interface BDXBridgeOpenSelectionSheetMethod : BDXBridgeMethod <DUXSingleSelectionPanelDelegate, DUXSheetDelegate, DUXMultipeSelectionPanelDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)metaInfo;

- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidClickCloseButton:(id)a0;
- (void)sheetDidClickReturnButton:(id)a0;
- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (id)paramModel;
- (void)setParamModel:(id)a0;
- (id)selectionPanel:(id)a0 optionNameAtRow:(long long)a1;
- (void)selectionPanel:(id)a0 didClickRow:(long long)a1;
- (void)selectionPanelDidClickConfirmButton:(id)a0;
- (void)selectionPanelDidClickSecondaryButton:(id)a0;
- (id)cancelModel;
- (id)multiPanel;
- (void)setMultiPanel:(id)a0;
- (void)dismiss;
- (long long)authType;
- (void)setCompletionHandler:(id /* block */)a0;
- (id /* block */)completionHandler;
- (id)panel;
- (id)methodName;
- (id)sheet;
- (void)setPanel:(id)a0;
- (void)setSheet:(id)a0;

@end
