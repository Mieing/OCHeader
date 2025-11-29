@class DUXInfoPanel, NSString, DUXContentSheet;

@interface AWESCInfoPanelServiceImp : NSObject <DUXSheetDelegate, BDSCInfoPanelService>

@property (retain, nonatomic) DUXContentSheet *contentSheetView;
@property (retain, nonatomic) DUXInfoPanel *infoPanel;
@property (copy, nonatomic) NSString *prePanelIdentifier;
@property (copy, nonatomic) id /* block */ dismissCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetWillDismiss:(id)a0;
- (void)dismissWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (long long)duxImageStyleWithType:(long long)a0;
- (unsigned long long)duxButtonStyleWithType:(unsigned long long)a0;
- (unsigned long long)duxContentSheetAlignmentWithType:(long long)a0;
- (void)showRightPanelOn:(id)a0 image:(id)a1 imageStype:(long long)a2 imageSize:(struct CGSize { double x0; double x1; })a3 title:(id)a4 detail:(id)a5 actions:(id)a6;
- (void)showPanelOn:(id)a0 image:(id)a1 imageStype:(long long)a2 imageSize:(struct CGSize { double x0; double x1; })a3 title:(id)a4 detail:(id)a5 actions:(id)a6;
- (BOOL)updatePanelIdentifier:(id)a0;
- (void)showPanelOn:(id)a0 contentAlignment:(long long)a1 image:(id)a2 imageStype:(long long)a3 imageSize:(struct CGSize { double x0; double x1; })a4 title:(id)a5 detail:(id)a6 actions:(id)a7;
- (void)showPanelOn:(id)a0 contentAlignment:(long long)a1 image:(id)a2 imageStype:(long long)a3 imageSize:(struct CGSize { double x0; double x1; })a4 title:(id)a5 detail:(id)a6 actions:(id)a7 dismissCompletion:(id /* block */)a8;
- (void)updateContentSheetWidth:(double)a0;
- (void)updateInfoPanelEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void).cxx_destruct;

@end
