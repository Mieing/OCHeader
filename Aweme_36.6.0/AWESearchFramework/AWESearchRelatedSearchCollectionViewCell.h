@class NSString, UIImageView, UILabel, AWESearchMoreCardModel;
@protocol AWESearchRelatedSearchPrefetchProtocol;

@interface AWESearchRelatedSearchCollectionViewCell : UICollectionViewCell <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UILabel *wordLabel;
@property (retain, nonatomic) UIImageView *hotIconView;
@property (retain, nonatomic) AWESearchMoreCardModel *model;
@property (nonatomic) double textWidth;
@property (nonatomic) unsigned long long cardStyle;
@property (weak, nonatomic) id<AWESearchRelatedSearchPrefetchProtocol> prefetchDelegate;
@property (nonatomic) BOOL startPrefetch;
@property (nonatomic) double lastHitTestTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)awe_themeWillChange:(long long)a0;
- (double)iconLeftMargin;
- (double)hotIconSize;
- (void)didSelectCell;
- (id)wordColor;
- (double)cellRadius;
- (id)cellBGColor;
- (void)onHandlePan:(id)a0;
- (double)leftLabelMargin;
- (double)rightLabelMargin;
- (BOOL)hasIconURLInfo;
- (void)cancelPressPrefetchAfterDelay;
- (double)wordFontSize;
- (BOOL)wordBold;
- (void)updateWithModel:(id)a0 cardStyle:(unsigned long long)a1;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
