@class UIView, MMWebImageView, NSString, FinderBulkBuyInfo, MMFinderLiveTaskId, MMFinderLiveTagsLabel, MMFinderLiveProductButton, UILabel, MMUILabel;
@protocol MMFinderLiveBulkBuyPromoteContentViewDelegate;

@interface MMFinderLiveBulkBuyPromoteContentView : UIView <MMFinderLiveTagsLabelDelegate>

@property (retain, nonatomic) FinderBulkBuyInfo *bulkBuyInfo;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) MMWebImageView *imageView;
@property (retain, nonatomic) MMUILabel *serialNumLabel;
@property (retain, nonatomic) MMFinderLiveTagsLabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *discountLabel;
@property (retain, nonatomic) MMFinderLiveProductButton *actionButton;
@property (retain, nonatomic) MMFinderLiveTaskId *taskID;
@property (nonatomic) BOOL isInReplay;
@property (readonly, nonatomic) MMWebImageView *bulkBuyImageView;
@property (weak, nonatomic) id<MMFinderLiveBulkBuyPromoteContentViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (double)imageViewSideLength;
- (void)layoutLeft;
- (void)layoutRightBottom;
- (void)layoutRightTop;
- (void)fillWithBulkBuyInfo:(id)a0;
- (void)refreshData;
- (void)onActionButtonClicked:(id)a0;
- (void)onWebImageGetDifferentSize;
- (void)startDisplayAnimationWithPart1Duration:(double)a0 part2Duration:(double)a1;
- (void)startHideAnimationWithPart1Duration:(double)a0 part2Duration:(double)a1;
- (void).cxx_destruct;

@end
