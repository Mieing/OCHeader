@class MMDictationLogic, NSString;
@protocol WeNoteDictationDelegate;

@interface WeNoteDictationController : NSObject <MMDictationLogicObserver>

@property (retain, nonatomic) MMDictationLogic *dictationLogic;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } dictationDisplayingRange;
@property (weak, nonatomic) id<WeNoteDictationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCgiScene:(long long)a0;
- (BOOL)isRecording;
- (BOOL)tapSwitch;
- (BOOL)start;
- (BOOL)stopForReason:(long long)a0;
- (void)onDictationBegan;
- (void)onDictationFirstVoiceDataOut:(id)a0;
- (void)onDictationLevelMeter:(float)a0;
- (void)onDictationEnd:(id)a0 endFlag:(long long)a1 displayText:(id)a2;
- (void)onDictationResult:(id)a0;
- (void).cxx_destruct;

@end
