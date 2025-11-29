@class NSDictionary, NSString, DUXContentSheet;

@interface AWEPostPageReplaceInteractionManager : NSObject <DUXSheetDelegate>

@property (copy, nonatomic) id /* block */ quitBlock;
@property (weak, nonatomic) DUXContentSheet *currentSheet;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetDidClickCloseButton:(id)a0;
- (BOOL)sheetWillStayAfterClickMaskArea;
- (void)updateTrackParams:(id)a0;
- (void)trackPanelShow;
- (void)trackToastShow;
- (void)showReplaceSuccessToast:(id)a0;
- (void)showReplacePanelWithHighlightPOI:(BOOL)a0 poiIcon:(id)a1 poiText:(id)a2 anchorIcon:(id)a3 anchorText:(id)a4 anchorSubIcon:(id)a5 anchorSubText:(id)a6 Title:(id)a7 subTitle:(id)a8 confirmBtnText:(id)a9 cancelBtnText:(id)a10 confirmBlock:(id /* block */)a11 cancelBlock:(id /* block */)a12 quitBlock:(id /* block */)a13;
- (id)topViewWithHighlightPOI:(BOOL)a0 poiIcon:(id)a1 poiText:(id)a2 anchorIcon:(id)a3 anchorText:(id)a4 anchorSubIcon:(id)a5 anchorSubText:(id)a6;
- (id)panelSheetWithTopView:(id)a0 Title:(id)a1 subTitle:(id)a2 confirmBtnText:(id)a3 cancelBtnText:(id)a4 confirmClickBlock:(id /* block */)a5 cancelClickBlock:(id /* block */)a6;
- (id)labelWithText:(id)a0 fontSize:(double)a1;
- (id)anchorSubViewWithIcon:(id)a0 text:(id)a1;
- (void)trackPanelClickWithClickType:(id)a0;
- (void).cxx_destruct;

@end
