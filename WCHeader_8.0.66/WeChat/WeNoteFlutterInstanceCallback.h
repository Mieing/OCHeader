@interface WeNoteFlutterInstanceCallback : NSObject {
    struct WeNoteFlutterInstanceDispatcherBridgeObjcImpl { void /* function */ **x0; struct WeNoteFlutterInstanceDispatcherCallback *x1; id x2; } *dispatcher_bridge;
}

- (id)initWithCpp:(struct WeNoteFlutterInstanceDispatcherBridgeObjcImpl { void /* function */ **x0; struct WeNoteFlutterInstanceDispatcherCallback *x1; id x2; } *)a0;
- (void)onreloadAttachmentComplete:(unsigned long long)a0;
- (void)ononEndPlayVoiceComplete:(unsigned long long)a0;
- (void)ononStartPlayVoiceComplete:(unsigned long long)a0;
- (void)ononVoicePlayingComplete:(unsigned long long)a0;
- (void)ononUpdateRecordDetailComplete:(unsigned long long)a0;
- (void)ononEndRecordComplete:(unsigned long long)a0;
- (void)onbeginParseHTMLComplete:(unsigned long long)a0;
- (void)ontranslateFullContentComplete:(unsigned long long)a0;
- (void)oncancelTranslateComplete:(unsigned long long)a0;
- (void)ononChangeTranslationLanguageFinishedComplete:(unsigned long long)a0;
- (void)onshowTranslationTitleBtnComplete:(unsigned long long)a0;
- (void)ongetAttachmentRectComplete:(unsigned long long)a0 rect:(id)a1;
- (void)onopenContentSearchBarComplete:(unsigned long long)a0;
- (void)onconvertToImageComplete:(unsigned long long)a0;
- (void)onsetAttachmentVisibleComplete:(unsigned long long)a0;
- (void)onshowNoteAlertComplete:(unsigned long long)a0;
- (void)onshowNoteCustomAlertComplete:(unsigned long long)a0;
- (void)onexitNotePageComplete:(unsigned long long)a0;
- (void)oninsertAttributeInfosComplete:(unsigned long long)a0;
- (void)oninsertTextComplete:(unsigned long long)a0;
- (void)ongetToolViewHeightComplete:(unsigned long long)a0 height:(float)a1;
- (void)onreloadNoteComplete:(unsigned long long)a0;
- (void)onsetKeyboradHiddenComplete:(unsigned long long)a0;
- (void)onchangeLoadingUIVisibilityComplete:(unsigned long long)a0;
- (void)ononNoteExpiredComplete:(unsigned long long)a0;
- (void)ononDictationUIStateChangeComplete:(unsigned long long)a0;
- (void)ononDictationLevelMeterChangeComplete:(unsigned long long)a0;

@end
