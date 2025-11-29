@class UIColor, NSString, UIImageView, UILabel, UIView, NSIndexPath;
@protocol AWESearchRecommWordsPrefetchProtocol;

@interface AWESearchRecommWordsCollectionViewCell : UICollectionViewCell <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *hotIconView;
@property (retain, nonatomic) UIImageView *windVaneImgView;
@property (retain, nonatomic) UIColor *cellBackgroundColor;
@property (nonatomic) BOOL startPrefetch;
@property (nonatomic) double lastHitTestTimestamp;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (weak, nonatomic) id<AWESearchRecommWordsPrefetchProtocol> prefetchDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)itemWidthWithText:(id)a0;
+ (BOOL)wordBold;
+ (id)titleCellIdentifier;
+ (id)imageCellIdentifier;
+ (double)itemWidthWithText:(id)a0 withHot:(BOOL)a1 withModel:(id)a2 withTitle:(id)a3;
+ (BOOL)hasIconURLInfoWithModel:(id)a0;
+ (double)recommendTextSize;
+ (id)textFont;
+ (id)identifier;

- (void)awe_themeWillChange:(long long)a0;
- (void)buildViews;
- (void)didSelectCell;
- (id)wordColor;
- (id)cellBGColor;
- (void)onHandlePan:(id)a0;
- (void)updateWithText:(id)a0 withHot:(BOOL)a1 withModel:(id)a2 withTitle:(id)a3;
- (double)recommendCellRadius;
- (void)updateWindVaneUILayoutWithImgWidth:(double)a0;
- (void)cancelPressPrefetchIfNeed;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
