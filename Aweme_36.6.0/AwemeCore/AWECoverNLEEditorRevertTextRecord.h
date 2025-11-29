@class ACCTextStickerView, ACCGestureResponsibleStickerView, AWECoverNLEEditorRevertTextRecordConfig;

@interface AWECoverNLEEditorRevertTextRecord : AWECoverNLEEditorRevertRecord

@property (nonatomic) long long recordType;
@property (nonatomic) long long stickerId;
@property (nonatomic) long long index;
@property (retain, nonatomic) ACCTextStickerView *textStickerView;
@property (retain, nonatomic) ACCGestureResponsibleStickerView *gestureResponsibleStickerView;
@property (copy, nonatomic) id /* block */ undoBlock;
@property (copy, nonatomic) id /* block */ redoBlock;
@property (retain, nonatomic) AWECoverNLEEditorRevertTextRecordConfig *oldConfig;
@property (retain, nonatomic) AWECoverNLEEditorRevertTextRecordConfig *currentConfig;

- (void).cxx_destruct;
- (id)init;
- (void)redo;
- (void)undo;

@end
