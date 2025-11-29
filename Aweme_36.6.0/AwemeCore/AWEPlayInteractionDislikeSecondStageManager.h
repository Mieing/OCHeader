@class DUXBasicSheet, NSString, NSDictionary, AWEAwemeModel;

@interface AWEPlayInteractionDislikeSecondStageManager : NSObject <DUXSheetDelegate, DUXMultipeSelectionPanelDelegate>

@property (retain, nonatomic) DUXBasicSheet *secondStagePanelSheet;
@property (retain, nonatomic) AWEAwemeModel *secondStagePanelAwemeModel;
@property (copy, nonatomic) NSDictionary *secondStagePanelTrackExtra;
@property (copy, nonatomic) id /* block */ secondStageCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidClickCloseButton:(id)a0;
- (void)dislikeSecondStagePanelOnVC:(id)a0 awemeModel:(id)a1 trackExtra:(id)a2 completion:(id /* block */)a3;
- (id)selectionPanel:(id)a0 optionNameAtRow:(long long)a1;
- (id)selectionPanel:(id)a0 iconURLAtRow:(long long)a1;
- (id)headerForSelectionPanel:(id)a0;
- (void)selectionPanel:(id)a0 didClickRow:(long long)a1;
- (void)trackQuitDislikeReasonWithQuitMethod:(id)a0;
- (void)trackDislikeReasonToastShow;
- (void)trackDislikeSecondStagePanelReasonClickedWith:(id)a0;
- (void)selectionPanelDidClickConfirmButton:(id)a0;
- (void)selectionPanelDidClickSecondaryButton:(id)a0;
- (void).cxx_destruct;

@end
