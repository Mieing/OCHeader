@class MMLiveCommentPubbleCell;

@interface MMFinderLiveTopCommentContentView : UIView

@property (nonatomic) double topCommentMaxWidth;
@property (nonatomic) double topCommentMaxHeight;
@property (nonatomic) double topCommentMinWidth;
@property (nonatomic) double topCommentMinHeight;
@property (retain, nonatomic) MMLiveCommentPubbleCell *displayPubbleCell;
@property (nonatomic) double currentLayoutStandardWidth;
@property (nonatomic) double currentLayoutFontScale;
@property (nonatomic) BOOL innerShouldDisplay;
@property (nonatomic) BOOL outerShouldDisplay;

- (void)layoutSubviews;
- (BOOL)judgeLayoutStandardWidthChanged;
- (BOOL)judgeLayoutFontScaleChanged;
- (void)initDefaultLayoutStandardWidth;
- (void)initDefaultLayoutFontScale;
- (void)updateLayoutStandardWidth;
- (void)updateLayoutFontScale;
- (void)updateUIForLayoutFontScaleChanged;
- (void)updateDisplay;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (double)getPubbleWidth:(id)a0;
- (void).cxx_destruct;

@end
