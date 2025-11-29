@class DUXBasicSheet, AWEDislikePanelNetworkHelper, NSDictionary, NSString;

@interface AWEPlayInteractionDislikePanelManager : NSObject <AWEPlayInteractionDislikeTableViewControllerDelegate, AWEMultipleSelectionDislikePanelViewControllerDelegate, AWEPIDislikePanelVCDelegate, DUXSheetDelegate>

@property (retain, nonatomic) DUXBasicSheet *sheet;
@property (copy, nonatomic) id /* block */ dislikePanelSelectedBlock;
@property (copy, nonatomic) id /* block */ dislikeMultipleSelectionBlock;
@property (copy, nonatomic) id /* block */ dislikeV2MultipleSelectionBlock;
@property (copy, nonatomic) id /* block */ dislikePanelCancelBlock;
@property (copy, nonatomic) NSDictionary *trackExtra;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) unsigned long long panelType;
@property (retain, nonatomic) AWEDislikePanelNetworkHelper *networkHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidClickCloseButton:(id)a0;
- (void)sheetDidDismiss:(id)a0;
- (void)sheetDidDragToDismiss:(id)a0;
- (void)dislikePanelOnVC:(id)a0 awemeModel:(id)a1 trackExtra:(id)a2 multipleSelectionBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4;
- (void)dislikeV2PanelOnVC:(id)a0 awemeModel:(id)a1 trackExtra:(id)a2 multipleSelectionBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4;
- (void)dislikePanelOnVC:(id)a0 awemeModel:(id)a1 trackExtra:(id)a2 selectedBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4;
- (void)submitWithInfos:(id)a0 awemeModel:(id)a1;
- (void)didClickedClose:(id)a0;
- (void)submitWithInfos:(id)a0 awemeModel:(id)a1 logExtra:(id)a2;
- (void)didClickCancel:(id)a0 logExtra:(id)a1;
- (void)didClickClose:(id)a0 logExtra:(id)a1;
- (void)trackQuitPanelDislikeWithQuitMethod:(id)a0;
- (void)requestDimensionWithModel:(id)a0 vc:(id)a1;
- (void)trackSubmitResult:(id)a0 awemeModel:(id)a1;
- (void)trackQuitDislikeReasonWithQuitMethod:(id)a0;
- (void)submitDislikeReasonsToNegativeFilterWithInfos:(id)a0 awemeModel:(id)a1;
- (void)optionSelectedIndex:(id)a0;
- (void).cxx_destruct;

@end
