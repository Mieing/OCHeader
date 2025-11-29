@class ACCPicTemplateModel, NLECommit_OC, NSArray, NSIndexPath;

@interface AWECoverNLEEditorRevertNLERecord : AWECoverNLEEditorRevertRecord

@property (retain, nonatomic) NLECommit_OC *currentCommit;
@property (nonatomic) BOOL isDidChanged;
@property (nonatomic) long long recordType;
@property (nonatomic) long long stickerId;
@property (retain, nonatomic) ACCPicTemplateModel *templateModel;
@property (retain, nonatomic) NSIndexPath *lastIndexPath;
@property (retain, nonatomic) NSArray *oldStickerViews;
@property (retain, nonatomic) NSArray *currentStickerViews;

- (id)nle;
- (void)setupStickerViews;
- (void)removeStickerViewIfNeeded:(id)a0;
- (void)undoToCommit:(id)a0;
- (void)redoToCommit:(id)a0;
- (void).cxx_destruct;
- (void)record;
- (void)redo;
- (void)undo;

@end
