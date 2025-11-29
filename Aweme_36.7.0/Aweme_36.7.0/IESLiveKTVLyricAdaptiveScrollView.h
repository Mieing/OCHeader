@class IESLiveKRCLyricView, NSArray, IESLiveKRCSentence, IESLiveLyricViewConfig;

@interface IESLiveKTVLyricAdaptiveScrollView : HTSEventForwardingView

@property (retain, nonatomic) IESLiveLyricViewConfig *config;
@property (nonatomic) double lyricHeight;
@property (nonatomic) double lyricLineWidth;
@property (nonatomic) long long scrollDirection;
@property (retain, nonatomic) NSArray *lyricViewStack;
@property (retain, nonatomic) IESLiveKRCLyricView *head;
@property (retain, nonatomic) IESLiveKRCSentence *backupSentence;
@property (nonatomic) long long currentRollingIndex;
@property (nonatomic) BOOL isShowingLyric;

- (void)updateConfig:(id)a0;
- (id)initWithConfig:(id)a0 visibleLyricsLineNumber:(unsigned long long)a1 lyricLineWidth:(double)a2 lyricLineHeight:(double)a3 scrollDirection:(long long)a4;
- (void)setupInitialLyrics:(id)a0;
- (void)rollAnimated:(BOOL)a0 nextSentence:(id)a1 completion:(id /* block */)a2;
- (void)refreshActiveLyricRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 progress:(double)a1;
- (void).cxx_destruct;
- (void)reload;
- (void)reset;

@end
