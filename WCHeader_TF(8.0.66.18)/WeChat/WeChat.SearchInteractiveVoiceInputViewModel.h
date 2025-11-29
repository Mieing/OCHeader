@class UIColor, NSString;

@interface WeChat.SearchInteractiveVoiceInputViewModel : NSObject <IStreamVoiceInputExt, INetworkStatusMgrExt> {
    void /* unknown type, empty encoding */ _hideStartButton;
    void /* unknown type, empty encoding */ _keyboardHeight;
    void /* unknown type, empty encoding */ _buttonBackgroundColor;
    void /* unknown type, empty encoding */ _panLocation;
    void /* unknown type, empty encoding */ _ellipseButtonState;
    void /* unknown type, empty encoding */ _peakPower;
    void /* unknown type, empty encoding */ rightOpWording;
    void /* unknown type, empty encoding */ startButtonFrame;
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ _activeButtonType;
    void /* unknown type, empty encoding */ _isUserHolding;
    void /* unknown type, empty encoding */ _isTranslatingVoiceToText;
    void /* unknown type, empty encoding */ _reset;
    void /* unknown type, empty encoding */ isCancelled;
    void /* unknown type, empty encoding */ isReleasedTooFast;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ recordStartTime;
    void /* unknown type, empty encoding */ recordEndTime;
    void /* unknown type, empty encoding */ inputLogicDic;
    void /* unknown type, empty encoding */ currentInputLogic;
    void /* unknown type, empty encoding */ resultDataArray;
    void /* unknown type, empty encoding */ reporter;
    void /* unknown type, empty encoding */ voiceIdArray;
}

@property (nonatomic) BOOL hideStartButton;
@property (nonatomic) double keyboardHeight;
@property (nonatomic, retain) UIColor *buttonBackgroundColor;
@property (nonatomic) void /* unknown type, empty encoding */ rightOpType;
@property (nonatomic, copy) NSString *rightOpWording;
@property (nonatomic) void /* unknown type, empty encoding */ resultButtonType;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (void)OnLevelMeter:(unsigned int)a0 Peak:(float)a1;
- (void)onGetResultText:(id)a0 andInputId:(unsigned int)a1;
- (void)OnError:(int)a0 andInputId:(unsigned int)a1;
- (void)OnVoiceTransEnd:(unsigned int)a0;
- (void)resetStateToIdle;
- (id)init;
- (void)dealloc;
- (id)getCurrentResultText;
- (id)getCurrentExposeId;
- (void).cxx_destruct;

@end
