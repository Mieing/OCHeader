@class NSString, AWEFeedPauseVideoRelatedWordView, AWEAwemeModel;

@interface AWEFeedPauseRelatedWordComponent : AWEFeedPauseModalBaseComponent <AWERelatedRecommendInflowViewControllerDelegate>

@property (retain, nonatomic) AWEFeedPauseVideoRelatedWordView *relatedView;
@property (retain, nonatomic) AWEAwemeModel *currentAweme;
@property (nonatomic) long long pauseContentNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)abConfig;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })relatedRecommendCollectionViewFrameWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)pauseModalBizType;
- (id)trackerParamsForFeedPauseButtonShow:(id)a0;
- (id)trackerParamsForFeedPauseButtonClick:(id)a0;
- (BOOL)isBottomTitle;
- (void)updateProgressInteractionAreaIfNeeded;
- (void)resetProgressInteractionAreaIfNeeded;
- (unsigned long long)wordStyle;
- (void)trackFalseTouchIfNeed;
- (void)hideComponentWithModel:(id)a0;
- (id)recommendsWords;
- (id)pauseContentWithModel:(id)a0;
- (void)showRelatedRecommendPanelControllerWithSelectedText:(id)a0;
- (id)updateViewWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)back;

@end
