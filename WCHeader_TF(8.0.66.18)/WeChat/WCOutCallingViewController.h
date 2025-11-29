@class UIView, NSString, WCOutDialPad, UIButton, MMTimerLabel, WavAudioPlayer, UILabel, MMTimer;
@protocol WcoMinimizeDelegate;

@interface WCOutCallingViewController : MMUIViewController <IWCOutCallExt, WCOutDialPadDelegate, MMTipsViewControllerDelegate> {
    BOOL m_buttonsEnable;
    long long m_lastAddKeyPadTime;
}

@property (retain, nonatomic) UIView *normalBigView;
@property (retain, nonatomic) UILabel *userLabel;
@property (retain, nonatomic) UILabel *phoneLabel;
@property (retain, nonatomic) UILabel *stateLabel;
@property (retain, nonatomic) MMTimerLabel *timerLabel;
@property (retain, nonatomic) UILabel *keyPadInputLabel;
@property (retain, nonatomic) WCOutDialPad *dialPad;
@property (retain, nonatomic) MMTimer *m_netStatusUpdateTimer;
@property (retain, nonatomic) UILabel *m_netStatusLabel;
@property (retain, nonatomic) WavAudioPlayer *m_wavAudioPlayer;
@property (nonatomic) BOOL hasBeAccepted;
@property (retain, nonatomic) UIButton *minimizeButton;
@property (weak, nonatomic) id<WcoMinimizeDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (void)initView;
- (void)updateNetStatus;
- (void)configBlurBackground;
- (void)configNormalBigView;
- (void)configKeyPadBigView;
- (void)initViewData;
- (void)updatePhoneAndUserLabel;
- (void)dismiss;
- (void)OnPressedDialPadKeyWithText:(id)a0 andKeyCode:(int)a1;
- (void)OnPressedDialPadFunctionBtnWithType:(unsigned long long)a0;
- (void)OnUpdateCallStateWithText:(id)a0;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1 tipTag:(long long)a2;
- (void)initMinimizeButton;
- (void)onMinimizeButtonClick;
- (void).cxx_destruct;

@end
