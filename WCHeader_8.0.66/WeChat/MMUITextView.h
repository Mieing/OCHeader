@interface MMUITextView : UITextView

@property (nonatomic) BOOL isDictationPlaceholderShow;

- (void)dictationRecognitionFailed;
- (void)dictationRecordingDidEnd;
- (id)insertDictationResultPlaceholder;
- (void)removeDictationResultPlaceholder:(id)a0 willInsertResult:(BOOL)a1;

@end
