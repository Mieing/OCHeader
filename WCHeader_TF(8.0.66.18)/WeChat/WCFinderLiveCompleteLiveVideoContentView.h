@class MMUIButton, MMUILabel, UIView;
@protocol WCFinderLiveCompleteLiveVideoContentViewDelegate;

@interface WCFinderLiveCompleteLiveVideoContentView : UIView

@property (retain, nonatomic) UIView *videoContainerView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *timeLabel;
@property (retain, nonatomic) MMUIButton *actionButton;
@property (nonatomic) double itemBottom;
@property (nonatomic) BOOL isLayoutFeeds;
@property (weak, nonatomic) id<WCFinderLiveCompleteLiveVideoContentViewDelegate> delegate;
@property (nonatomic) double containerViewHeight;

- (id)init;
- (void)layoutSubviews;
- (double)widthAndHeightScale;
- (double)itemMargin;
- (double)videoContainerViewPadding;
- (void)layoutCardItem:(id)a0;
- (void)updateVideoContainerViewHeight;
- (void)actionButtonClick:(id)a0;
- (void).cxx_destruct;

@end
