@class NSString, KindaUIScrollView, MMKScrollViewOnScrollCallback;

@interface KindaScrollView : KindaLayout <UIScrollViewDelegate, MMKScrollView>

@property (nonatomic) BOOL m_shouldShowScrollBar;
@property (retain, nonatomic) MMKScrollViewOnScrollCallback *callback;
@property (retain, nonatomic) KindaUIScrollView *m_scrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setScrollWhenViewSizeEnough:(BOOL)a0;
- (BOOL)getScrollWhenViewSizeEnough;
- (id)getView;
- (void)setShowScrollBar:(BOOL)a0;
- (BOOL)getShowScrollBar;
- (id)getContent;
- (void)setOnScrollCallback:(id)a0;
- (void)scrollTo:(id)a0 xOffset:(float)a1 yOffset:(float)a2 animated:(BOOL)a3;
- (void)setContentInsect:(float)a0 left:(float)a1 bottom:(float)a2 right:(float)a3;
- (void)addView:(id)a0;
- (void)removeView:(id)a0;
- (void)setScrollToDimissKeyboardEnabled:(BOOL)a0;
- (BOOL)getScrollToDimissKeyboardEnabled;
- (id)getContentOffset;
- (void)setContentOffset:(id)a0;
- (void)setContentOffset:(id)a0 animated:(BOOL)a1;
- (void)setContent:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void).cxx_destruct;

@end
