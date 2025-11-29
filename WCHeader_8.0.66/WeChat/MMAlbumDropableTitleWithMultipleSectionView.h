@class OrderedDictionary, NSString, UIView;
@protocol MMAlbumDropableTitleWithMultipleSectionViewDelegate;

@interface MMAlbumDropableTitleWithMultipleSectionView : MMTitleView <MMAlbumDropableTitleViewDelegate, MMAlbumSectionCellDelegate>

@property (retain, nonatomic) OrderedDictionary *sectionViews;
@property (retain, nonatomic) UIView *sliderView;
@property (nonatomic) unsigned long long selectingIndex;
@property (weak, nonatomic) id<MMAlbumDropableTitleWithMultipleSectionViewDelegate> titleViewDelegate;
@property (nonatomic) BOOL canSwitch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSections:(unsigned long long)a0;
- (void)initViewsWithSections:(id)a0;
- (BOOL)isAccessibilityElement;
- (void)layoutSections;
- (void)layoutSubviews;
- (id)getAlbumTitleView;
- (void)onSlidingWithProgress:(double)a0;
- (void)onSlidingEndsToIndex:(unsigned long long)a0;
- (void)switchToSection:(unsigned long long)a0 needNotifyScrollView:(BOOL)a1;
- (void)performDeactiveCurrentSection;
- (void)performSlidesToNewSection:(unsigned long long)a0 needNotifyScrollView:(BOOL)a1;
- (void)onClickDropableTitleView:(id)a0;
- (void)onDropableTitleViewSizeChanged:(id)a0;
- (void)onTapSectionCell:(id)a0;
- (void).cxx_destruct;

@end
