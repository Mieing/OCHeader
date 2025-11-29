@class NSString;
@protocol MMDictationLogicIconDelegate, IMMDictationLogic;

@interface MMDictationLogicIcon : MMDictationIconView <MMDictationLogicObserver>

@property (retain, nonatomic) id<IMMDictationLogic> dictationLogic;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } dictationDisplayingRange;
@property (nonatomic) unsigned long long uiScene;
@property (nonatomic) unsigned long long triggerScene;
@property (weak, nonatomic) id<MMDictationLogicIconDelegate> delegate;
@property (nonatomic) unsigned long long uiParentScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showToastForEndFlag:(long long)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 customIconImage:(id)a1 cgiScene:(long long)a2 uiScene:(unsigned long long)a3 uiParentScene:(unsigned long long)a4;
- (void)dealloc;
- (void)iconClicked;
- (BOOL)isRecording;
- (BOOL)start:(unsigned long long)a0;
- (BOOL)stopForReason:(long long)a0;
- (void)onDictationBegan;
- (void)onDictationFirstVoiceDataOut:(id)a0;
- (void)onDictationLevelMeter:(float)a0;
- (void)onDictationEnd:(id)a0 endFlag:(long long)a1 displayText:(id)a2;
- (void)onDictationResult:(id)a0;
- (id)reportKey;
- (id)chatName;
- (void)onUserModifyText;
- (void)onSendFullText:(id)a0;
- (void)onClearAllText;
- (void)onExpose:(id)a0;
- (void)setupExposeReport;
- (void).cxx_destruct;

@end
