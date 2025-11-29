@class NSArray, NSTimer, NSString, UILabel;

@interface AWEFeedSubtitleContainerView : UIView

@property (retain, nonatomic) UILabel *subtitleLabel;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double currentPTS;
@property (copy, nonatomic) NSArray *subtitleList;
@property (nonatomic) double duration;
@property (nonatomic) double showedTimestamp;
@property (nonatomic) double remainingDuration;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) double speed;
@property (nonatomic) double maxWidth;

- (void)updateBackgroundColorType:(unsigned long long)a0;
- (id)attributedTextWithContent:(id)a0;
- (BOOL)downgradeToTruncation;
- (id)subtitleListWithContent:(id)a0;
- (id)sentenceWithContent:(id)a0;
- (void)updateContentWithSubInfo:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)resetTimer;
- (long long)numberOfLines;
- (void)reset;
- (void)dealloc;
- (void)setupUI;
- (id)subtitleLabelFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(unsigned long long)a1;

@end
