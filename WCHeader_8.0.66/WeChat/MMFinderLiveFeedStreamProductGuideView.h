@class FinderWindowProductInfo, NSString, MMFinderLiveFeedStreamBaseRecommendWordingView;
@protocol MMFinderLiveFeedStreamProductGuideViewDelegate;

@interface MMFinderLiveFeedStreamProductGuideView : MMFinderLiveFeedStreamWidgetBaseView

@property (retain, nonatomic) MMFinderLiveFeedStreamBaseRecommendWordingView *baseRecommendWordingView;
@property (weak, nonatomic) id<MMFinderLiveFeedStreamProductGuideViewDelegate> delegate;
@property (retain, nonatomic) FinderWindowProductInfo *productInfo;
@property (retain, nonatomic) NSString *recommendTag;
@property (nonatomic) unsigned long long tagType;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onActionButtonDidClick;
- (id)reportWording;
- (void)updateWording;
- (void)setTaskId:(id)a0;
- (void)prepareForReuse;
- (void)startExposeAction;
- (void)endExposeAction;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
