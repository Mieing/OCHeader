@class IESLiveKTVCountdownView, NSString, UIView;
@protocol IESLiveMultiKTVLyricProtocol;

@interface IESLiveKTVLyricServiceImpl : NSObject <IESLiveKTVLyricService>

@property (retain, nonatomic) UIView<IESLiveMultiKTVLyricProtocol> *lyricView;
@property (nonatomic) double timerInterval;
@property (nonatomic) long long currentStyle;
@property (weak, nonatomic) UIView *containerView;
@property (retain, nonatomic) IESLiveKTVCountdownView *singCountdownView;
@property (nonatomic) BOOL needSingCountDownView;
@property (copy, nonatomic) NSString *currentMusicId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)getViewHeight;
- (id)getMusicId;
- (void)updateLyrics:(id)a0;
- (void)updatePlayingTime:(double)a0;
- (id)getLyricView;
- (void)setupLyricStyle:(long long)a0;
- (void)updateMusicId:(id)a0;
- (void)addToContainerView;
- (void)updateTimeForCountDownViewIfNeeded:(double)a0;
- (void)startSingCountdownOffset:(double)a0;
- (void)updateLyricContainer:(id)a0;
- (void)updateLayoutIfNeeded;
- (BOOL)hasLyrics;
- (void).cxx_destruct;
- (void)clear;
- (void)clearData;
- (void)clean;

@end
