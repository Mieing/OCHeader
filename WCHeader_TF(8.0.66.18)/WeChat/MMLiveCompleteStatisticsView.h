@class MMUIButton, NSArray, UIImageView, MMLiveStatistics, MMLiveStatisticsItemView, UIView, MMLiveIconButton;
@protocol MMLiveCompleteStatisticsViewDelegate;

@interface MMLiveCompleteStatisticsView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIView *collapsedMonumentalItemViewsContainer;
@property (retain, nonatomic) MMLiveStatisticsItemView *collapsedMonumentalItemView;
@property (retain, nonatomic) MMLiveIconButton *expandButton;
@property (retain, nonatomic) UIView *expandedMonumentalItemViewsContainer;
@property (retain, nonatomic) NSArray *expandedMonumentalItemViews;
@property (retain, nonatomic) NSArray *itemViews;
@property (retain, nonatomic) UIView *horizontalSeparatorBar;
@property (retain, nonatomic) MMUIButton *detailsButton;
@property (retain, nonatomic) UIView *verticalSeparatorBar;
@property (retain, nonatomic) MMUIButton *postersButton;
@property (retain, nonatomic) MMLiveStatistics *statistics;
@property (nonatomic) BOOL expanded;
@property (weak, nonatomic) id<MMLiveCompleteStatisticsViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)onExpandButtonTapped;
- (void)onDetailsButtonTapped;
- (void)onPostersButtonTapped;
- (void)initializeComponents;
- (void)updateContentWithPreviousStatistics:(id)a0 currentStatistics:(id)a1;
- (void)updateCollapsedMonumentalItemViewForStatistics:(id)a0;
- (void)updateExpandedMonumentalItemViewsForStatistics:(id)a0;
- (void)updateItemViewsForStatistics:(id)a0;
- (void).cxx_destruct;

@end
