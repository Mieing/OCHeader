@class AWECoverNLEEditorRevertGestureRecordConfig, ACCTemplateTextStickerView, NSMutableArray;

@interface AWECoverNLEEditorRevertGestureRecord : AWECoverNLEEditorRevertRecord

@property (retain, nonatomic) ACCTemplateTextStickerView *contentView;
@property (retain, nonatomic) NSMutableArray *currentStartGestures;
@property (retain, nonatomic) AWECoverNLEEditorRevertGestureRecordConfig *oldConfig;
@property (retain, nonatomic) AWECoverNLEEditorRevertGestureRecordConfig *currentConfig;

- (void).cxx_destruct;
- (id)init;
- (void)redo;
- (void)undo;

@end
