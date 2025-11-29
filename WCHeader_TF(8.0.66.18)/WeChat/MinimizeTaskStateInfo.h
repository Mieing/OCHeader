@class NSString;
@protocol MinimizeTaskStateInfoDelegate;

@interface MinimizeTaskStateInfo : MMObject <PBCoding>

@property (weak, nonatomic) id<MinimizeTaskStateInfoDelegate> delegate;
@property (nonatomic) BOOL disableCloseBtn;
@property (nonatomic) BOOL showPlayNextBtn;
@property (nonatomic) unsigned long long playNextBtnStatus;
@property (nonatomic) BOOL showPlayPauseBtn;
@property (nonatomic) BOOL canOpenFromStateView;
@property (nonatomic) BOOL fixedStateViewWidth;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL showVoiceInputBtn;
@property (nonatomic) BOOL isVoiceInputLoading;
@property (nonatomic) BOOL isVoiceControlRecording;
@property (nonatomic) BOOL showVoiceControlPeak;
@property (nonatomic) BOOL isVoiceInputHighlighted;
@property (nonatomic) BOOL showTalkingState;
@property (nonatomic) BOOL ignoreIcon;
@property (nonatomic) BOOL didStartVoiceRecorder;
@property (nonatomic) BOOL showBizVoiceInputBtn;
@property (nonatomic) long long bizVoiceState;
@property (nonatomic) long long bizVoiceSpeedFactor;
@property (nonatomic) BOOL greenDotShow;
@property (nonatomic) BOOL greenDotShrink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_disableCloseBtn;
+ (void)PBArrayAdd_showPlayNextBtn;
+ (void)PBArrayAdd_showPlayPauseBtn;
+ (void)PBArrayAdd_canOpenFromStateView;
+ (void)PBArrayAdd_fixedStateViewWidth;
+ (void)PBArrayAdd_showVoiceInputBtn;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void).cxx_destruct;

@end
