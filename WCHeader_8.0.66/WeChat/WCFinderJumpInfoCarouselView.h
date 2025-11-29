@class UIColor, UIScrollViewAnimator, NSArray, WCFinderAdCarouselCollectionViewCell, FinderJumpInfo_Style, NSString, WCFinderCarouselLayout, NSMutableArray, UICollectionView, MMTimer;
@protocol WCFinderJumpInfoCarouselViewDelegate;

@interface WCFinderJumpInfoCarouselView : WCFinderJumpInfoView <UICollectionViewDataSource, UICollectionViewDelegate, WCFinderCarouselLayoutDelegate, WCFinderAdCarouselCollectionViewCellDelegate>

@property (retain, nonatomic) NSArray *jumpInfoArray;
@property (retain, nonatomic) FinderJumpInfo_Style *appearStyle;
@property (nonatomic) double maxTextAreaWidth;
@property (nonatomic) double maxWidth;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetFrame;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) WCFinderCarouselLayout *collectionViewLayout;
@property (weak, nonatomic) WCFinderAdCarouselCollectionViewCell *topCarouselCell;
@property (retain, nonatomic) MMTimer *carouselTimer;
@property (retain, nonatomic) UIScrollViewAnimator *scrollViewAnimator;
@property (retain, nonatomic) UIColor *themeColor;
@property (retain, nonatomic) NSMutableArray *carouselCountArray;
@property (retain, nonatomic) NSMutableArray *autoCarouselCountArray;
@property (retain, nonatomic) NSMutableArray *clickCountArray;
@property (weak, nonatomic) id<WCFinderJumpInfoCarouselViewDelegate> delegate;
@property (nonatomic) long long topCardIndex;
@property (readonly, copy, nonatomic) NSString *carouselId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)updateWithJumpInfoArray:(id)a0 showPosition:(int)a1;
- (void)changeToShow:(BOOL)a0;
- (void)startExposeAction;
- (void)endExposeAction;
- (void)setMaxWidth:(double)a0 maxTextAreaWidth:(double)a1;
- (void)prepareForAppearAnimationFromView:(id)a0;
- (void)changeToAppear:(BOOL)a0 duration:(double)a1;
- (void)completionForAppearAnimation;
- (void)notifyToShow;
- (void)startCarousel;
- (void)stopCarousel;
- (void)scrollToNextCard;
- (void)resetToCenterIfNeeded;
- (double)carouselItemWidth;
- (void)clearReportInfo;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (double)collectionView:(id)a0 cellWidthAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)carouseCollectionViewCell:(id)a0 switchFromPos:(long long)a1 toPos:(long long)a2;
- (void)carouseCollectionViewCell:(id)a0 updateThemeColorWithImage:(id)a1;
- (id)carouselCellAtIndexPath:(id)a0;
- (id)carouselSequence;
- (id)autoCarouselSequence;
- (id)manualCarouselSequence;
- (id)clickSequence;
- (long long)autoCarouselCount;
- (long long)manualCarouselCount;
- (id)topJumpInfoView;
- (void).cxx_destruct;

@end
