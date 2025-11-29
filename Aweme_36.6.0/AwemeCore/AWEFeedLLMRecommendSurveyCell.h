@class AWEFeedLLMRecommendSurveyCellViewController, UIViewController;

@interface AWEFeedLLMRecommendSurveyCell : AWEFeedViewCell {
    UIViewController *_parentVC;
}

@property (retain, nonatomic) AWEFeedLLMRecommendSurveyCellViewController *viewController;

- (void)removeCellChildVCForMemoryOpt;
- (void)addChildVC;
- (void)removeChildVC;
- (void).cxx_destruct;
- (id)parentVC;
- (void)setParentVC:(id)a0;

@end
