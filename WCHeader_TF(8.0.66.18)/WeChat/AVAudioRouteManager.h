@class NSString, MMTimer, AVAudioSessionPortDescription;
@protocol AVAudioRouteManagerDelegate;

@interface AVAudioRouteManager : NSObject

@property (nonatomic) BOOL hasExtenalOutput;
@property (retain, nonatomic) AVAudioSessionPortDescription *curOutputPort;
@property (retain, nonatomic) NSString *settingPortType;
@property (retain, nonatomic) NSString *curPortType;
@property (retain, nonatomic) MMTimer *m_actingTimer;
@property (nonatomic) unsigned long long scene;
@property (weak, nonatomic) id<AVAudioRouteManagerDelegate> delegate;

- (id)initWithScene:(unsigned long long)a0;
- (void)setAudioStatus:(BOOL)a0 isCaller:(BOOL)a1;
- (void)setAudioStatusOfSpeaker:(BOOL)a0;
- (void)initAudioRoute;
- (BOOL)checkIfHasExternalOutput:(id)a0;
- (void)timerCheckAudioFunction;
- (void)clearActingTimer;
- (void)clearAndStop;
- (void)changeAudioToPort:(id)a0 hasChanged:(BOOL)a1;
- (void)onWCAudioSessionRouteChange:(id)a0 reasonValue:(unsigned long long)a1;
- (void)updatePortType:(id)a0 reasonValue:(unsigned long long)a1;
- (void).cxx_destruct;

@end
