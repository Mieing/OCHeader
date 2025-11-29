@class NSTimer, NSString, NSLock, UISlider, MSManagerML, IESLiveAnchorPFListItem, IESLiveScreencastAnchorPFMicrophoneSlidersView, IESLiveAnchorPFMicrophoneSlidersModel, NSDictionary, MPVolumeView, NSMutableArray;
@protocol IESLiveScreencastPushStreamer, IESLiveAnchorPFListService, IESLiveAnchorPFService;

@interface IESLiveScreencastPFFragment : IESLiveRoomComponent <IESLiveAnchorPFListObserver, IESLiveAnchorPFStateObserver, IESLiveAnchorRoomStatusChangeEvents>

@property (retain, nonatomic) IESLiveAnchorPFMicrophoneSlidersModel *microphoneSlidersModel;
@property (retain, nonatomic) IESLiveScreencastAnchorPFMicrophoneSlidersView *microphoneSlidersView;
@property (retain, nonatomic) IESLiveAnchorPFListItem *microphoneSlidersItem;
@property (retain, nonatomic) UISlider *mpVolumeSlider;
@property (retain, nonatomic) MPVolumeView *mpVolumeView;
@property (retain, nonatomic) id<IESLiveScreencastPushStreamer> screencastStreamer;
@property (retain, nonatomic) id<IESLiveAnchorPFService> pfService;
@property (retain, nonatomic) id<IESLiveAnchorPFListService> pfListService;
@property (nonatomic) BOOL isMicrophoneInterrupt;
@property (nonatomic) BOOL isMicrophoneSlidersModelChange;
@property (nonatomic) BOOL shouldStartTimer;
@property (retain, nonatomic) MSManagerML *msManager;
@property (nonatomic) long long pauseType;
@property (retain, nonatomic) NSTimer *reportDataTimer;
@property (retain, nonatomic) NSString *microphoneOpen;
@property (retain, nonatomic) NSString *timeString;
@property (retain, nonatomic) NSString *backMusic;
@property (nonatomic) BOOL isMute;
@property (nonatomic) long long audioDb;
@property (retain, nonatomic) NSDictionary *settingDictionary;
@property (nonatomic) BOOL isPaused;
@property (nonatomic) BOOL enabledCollection;
@property (retain, nonatomic) NSLock *collectDecibleLock;
@property (nonatomic) BOOL isEnd;
@property (retain, nonatomic) NSMutableArray *decibelValues;
@property (retain, nonatomic) NSTimer *decibleCollectionTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)onAudioDeviceStatus:(long long)a0 isMute:(BOOL)a1 audioDb:(long long)a2 inTime:(long long)a3;
- (void)reportData;
- (void)cleanViews;
- (void)startAnchorLiveWithRoom:(id)a0;
- (void)pauseAnchorLiveWithType:(unsigned long long)a0;
- (void)resumeAnchorLiveWithType:(long long)a0;
- (void)pfListViewDidDisAppear;
- (void)microphoneStateDidChange:(long long)a0;
- (void)setupMpVolumeView;
- (void)setupMicrophoneSlidersModel;
- (void)setupMicrophoneSlidersItem;
- (void)updateMicrophoneSlidersModel:(long long)a0;
- (void)updateMicrophoneSlidersViewIfNeeded;
- (void)checkStartCollectedMicrophone;
- (long long)getCurrentSpeakerValue;
- (long long)getCurrentMicValue;
- (long long)getCurrenticScreenInternalValue;
- (void)setupMicrophoneSlidersView;
- (void)updateMicrophoneSlidersView;
- (void)collectDecibel:(BOOL)a0 audioDb:(long long)a1;
- (void).cxx_destruct;
- (void)addObserver;
- (void)dealloc;
- (void)systemVolumeDidChange:(id)a0;
- (void)removeObserver;

@end
