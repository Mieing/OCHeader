@class NSString, NSMutableDictionary, AWEBinding, UIView;
@protocol ACCSequenceEditIndicatorViewDataSource, ACCSequenceEditIndicatorViewDelegate;

@interface ACCSequenceEditIndicatorView : UIView <ACCSequenceEditIndicatorViewProtocol> {
    NSMutableDictionary *_progressForIndexes;
    NSMutableDictionary *_pageStyleForIndexes;
}

@property (nonatomic) double contentWidth;
@property (retain, nonatomic) UIView *progressView;
@property (weak, nonatomic) AWEBinding *progressBinding;
@property (nonatomic) double horizontalInset;
@property (nonatomic) double origViewWidth;
@property (nonatomic) long long pageIndex;
@property (readonly, nonatomic) long long numberOfPages;
@property (weak, nonatomic) id<ACCSequenceEditIndicatorViewDataSource> dataSource;
@property (weak, nonatomic) id<ACCSequenceEditIndicatorViewDelegate> delegate;
@property (nonatomic) long long progressBarStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaultHeight;

- (double)itemGap;
- (void)setupViewIfNeed;
- (void)reloadPageStyleForIndex:(long long)a0;
- (void)p_tapGestureHandler:(id)a0;
- (void)p_updateNumberOfPages:(long long)a0;
- (void)p_updateBindingForCurrentPage;
- (void)p_updateProgressViewWithTargetPage:(long long)a0;
- (void)updateProgressParagraphShapeLayer;
- (void)reloadPageStyle;
- (void)p_updateProgressParagraphShapeLayer;
- (double)xPositionForPage:(long long)a0 fraction:(double)a1;
- (double)pptItemWidth;
- (double)itemCapWithItemWidth:(double)a0;
- (id)initWithViewWidth:(double)a0;
- (void)reloadDataAtIndex:(long long)a0;
- (void)updateViewWidth:(double)a0;
- (void)reloadProgressBarStyle;
- (void)reloadData;
- (void).cxx_destruct;
- (double)itemWidth;

@end
