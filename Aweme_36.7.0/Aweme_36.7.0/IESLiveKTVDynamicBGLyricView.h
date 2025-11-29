@class NSTimer, UILabel, IESLiveKTVDynamicBGLyricItem, NSString, IESLiveKRCSong, NSMutableArray, IESLiveLyricViewConfig, IESLiveKTVDynamicBGLyricLabel;

@interface IESLiveKTVDynamicBGLyricView : UIView <IESLiveMultiKTVLyricProtocol>

@property (retain, nonatomic) IESLiveKTVDynamicBGLyricLabel *leftTopLabelOne;
@property (retain, nonatomic) IESLiveKTVDynamicBGLyricLabel *leftTopLabelTheOther;
@property (retain, nonatomic) IESLiveKTVDynamicBGLyricLabel *rightBottomLabelOne;
@property (retain, nonatomic) IESLiveKTVDynamicBGLyricLabel *rightBottomLabelTheOther;
@property (retain, nonatomic) UILabel *willStartCountDownLabel;
@property (nonatomic) BOOL alreadyConuted;
@property (retain, nonatomic) NSTimer *countDownTimer;
@property (nonatomic) long long currentGap;
@property (retain, nonatomic) NSMutableArray *gapEndTime;
@property (retain, nonatomic) NSMutableArray *lyricDataPosLeft;
@property (retain, nonatomic) NSMutableArray *lyricDataPosRight;
@property (retain, nonatomic) NSMutableArray *lyricData;
@property (retain, nonatomic) IESLiveKRCSong *krcSong;
@property (retain, nonatomic) IESLiveLyricViewConfig *config;
@property (nonatomic) double threshold;
@property (nonatomic) double playingTime;
@property (retain, nonatomic) IESLiveKTVDynamicBGLyricItem *curLeftItem;
@property (retain, nonatomic) IESLiveKTVDynamicBGLyricItem *curRightItem;
@property (copy, nonatomic) NSString *lyricHexString;
@property (nonatomic) BOOL isCPUOptimize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateConfig:(id)a0;
- (double)getViewHeight;
- (void)updateLyrics:(id)a0;
- (void)updatePlayingTime:(double)a0;
- (void)setupBackgroundNotification;
- (int)isOverViewWidth:(id)a0;
- (void)openCountDownTimer;
- (id)p_findCurrentItemWithTime:(double)a0 position:(long long)a1;
- (void)p_updateLyricProgressWithItem:(id)a0 position:(long long)a1;
- (void)closeCountDownTimer;
- (void)p_cleanUI;
- (void)p_cleanDatasource;
- (void)updateFocusColor:(id)a0;
- (BOOL)isSync:(id)a0;
- (BOOL)hasLyrics;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)appDidEnterBackground:(id)a0;
- (id)initWithConfig:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;
- (void)clean;
- (double)singleLineHeight;

@end
