@interface AWEPlayInteractionLongVideoDescriptionElement : AWEPlayInteractionDescriptionElement

@property (nonatomic) double originLeftContainerWidth;
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) BOOL tracked;

- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewDidAppear;
- (void)viewController_viewDidDisappear;
- (void)layoutElementView;
- (unsigned long long)descriptionNumberOfLines;
- (void)trackForShow;
- (void)setLeftContainerWidth:(double)a0;
- (double)descriptionLabelConstraintWidth;
- (void)updateDescLabelIfExpand:(BOOL)a0 commentEnterSource:(unsigned long long)a1;
- (void)customDescriptionLabelContainer:(id)a0;
- (void)descriptionElementWillExpanded:(BOOL)a0;

@end
