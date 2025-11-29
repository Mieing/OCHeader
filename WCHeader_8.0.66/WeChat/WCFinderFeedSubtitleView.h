@class FinderSubtitleSentence, WCFinderFeedSubtitleViewModel, NSString, UIView, NSMutableArray;

@interface WCFinderFeedSubtitleView : UIView <WCFinderFeedSubtitleExt>

@property (retain, nonatomic) WCFinderFeedSubtitleViewModel *viewModel;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) FinderSubtitleSentence *currentSentence;
@property (retain, nonatomic) NSMutableArray *displaySentenceArray;
@property (nonatomic) unsigned long long displayIndex;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) double maxSubtitleWidth;
@property (retain, nonatomic) NSMutableArray *subtitleLabelArray;
@property (nonatomic) unsigned long long currentPosMs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentVM:(id)a0;
- (void)dealloc;
- (void)onVideoUpdatePosition:(double)a0 videoDuration:(double)a1 maxPlayVideoTime:(double)a2;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)spliteSentenceIfNeeded;
- (id)wordPosArrayInText:(id)a0 wordArray:(id)a1;
- (id)splitSentence:(id)a0 font:(id)a1;
- (void)addRemainWordWithArray:(id)a0 index:(unsigned long long)a1 language:(int)a2;
- (void)displayNextSentence;
- (void)updateLayout;
- (id)genSubtitleLabel:(id)a0;
- (void)onFinderFeedSubtitleShowLanguageChanged:(id)a0;
- (unsigned long long)displayScentenceIndexAtPosMs:(unsigned long long)a0;
- (void)onWechatDisplayLanguageChanged;
- (void).cxx_destruct;

@end
