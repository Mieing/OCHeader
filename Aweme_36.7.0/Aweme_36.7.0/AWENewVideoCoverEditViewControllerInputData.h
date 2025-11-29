@interface AWENewVideoCoverEditViewControllerInputData : ACCEditViewControllerInputData

@property (copy, nonatomic) id /* block */ saveBlock;
@property (copy, nonatomic) id /* block */ willChoosePageShowBlock;
@property (copy, nonatomic) id /* block */ stashChangesBlock;
@property (nonatomic) BOOL shouldShowEditVCDirectly;
@property (copy, nonatomic) id /* block */ updateCoverWithExportData;
@property (copy, nonatomic) id /* block */ updateCoverWithImage;
@property (copy, nonatomic) id /* block */ triggerEditorRequestRecommendText;
@property (copy, nonatomic) id /* block */ editHasUnsavedChange;
@property (copy, nonatomic) id /* block */ willChoosePageDismissBlock;
@property (copy, nonatomic) id /* block */ editHasEelements;
@property (copy, nonatomic) id /* block */ jxCoverPreviewBlock;

- (id)createId;
- (void).cxx_destruct;

@end
