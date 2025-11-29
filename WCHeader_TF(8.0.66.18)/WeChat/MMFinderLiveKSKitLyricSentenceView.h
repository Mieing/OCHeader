@class NSArray, NSString, UIView, MMFinderLiveKSKitLyricSentenceTextView;

@interface MMFinderLiveKSKitLyricSentenceView : UIView <CALayerDelegate>

@property (retain, nonatomic) NSArray *lyricWords;
@property (retain, nonatomic) MMFinderLiveKSKitLyricSentenceTextView *unSingSentenceView;
@property (retain, nonatomic) MMFinderLiveKSKitLyricSentenceTextView *singSentenceView;
@property (retain, nonatomic) UIView *singSentenceMaskContentView;
@property (nonatomic) int startTime;
@property (nonatomic) int endTime;
@property (nonatomic) double singLeftInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lyricWordFont;

- (id)initWithLyricWords:(id)a0;
- (void)layoutSubviews;
- (void)onPositionChanged:(int)a0;
- (void)createSentenceViews;
- (void)updateSelfSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateSentenceViewsOrigin;
- (id)createSentenceMaskContentView:(struct CGSize { double x0; double x1; })a0;
- (void)updateSentenceSingProgress:(int)a0;
- (double)getSingLeftInset:(int)a0;
- (void)updateSingLeftInset:(double)a0;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)drawInContext:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
