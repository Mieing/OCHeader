@class UIImageView, MMFinderLivePkTaskedBonusModel, UIView;
@protocol MMFinderLivePkTaskedBonusBarBackgroundView, MMFinderLivePkTaskedBonusBarContentView, MMFinderLivePkTaskedBonusBarViewDelegate;

@interface MMFinderLivePkTaskedBonusBarView : UIView

@property (retain, nonatomic) UIView *statefulViewsContainer;
@property (retain, nonatomic) UIView<MMFinderLivePkTaskedBonusBarBackgroundView> *backgroundView;
@property (retain, nonatomic) UIView<MMFinderLivePkTaskedBonusBarContentView> *contentView;
@property (retain, nonatomic) UIImageView *rightChevronView;
@property (retain, nonatomic) MMFinderLivePkTaskedBonusModel *model;
@property (weak, nonatomic) id<MMFinderLivePkTaskedBonusBarViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0 stateDescriptor:(id)a1;
- (void)layoutSubviews;
- (void)onBarViewTapped;
- (void)layoutContentView:(id)a0;
- (void)layoutBackgroundView:(id)a0 matchingContentView:(id)a1;
- (void).cxx_destruct;

@end
