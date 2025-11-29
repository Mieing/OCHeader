@interface AWECoverNLEEditorRevertMirrorRecord : AWECoverNLEEditorRevertRecord

@property (nonatomic) long long stickerId;

- (void)redo;
- (void)undo;

@end
