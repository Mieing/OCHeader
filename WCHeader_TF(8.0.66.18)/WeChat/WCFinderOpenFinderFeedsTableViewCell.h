@class NSString, UIImageView, WCFinderPreviewFeedHorizontallyView, RichTextView;
@protocol WCFinderOpenFinderFeedsTableViewCellDelegate;

@interface WCFinderOpenFinderFeedsTableViewCell : UITableViewCell <WCFinderPreviewFeedHorizontallyViewDelegate>

@property (retain, nonatomic) WCFinderPreviewFeedHorizontallyView *feedHorizonView;
@property (retain, nonatomic) RichTextView *tipsTextView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (weak, nonatomic) id<WCFinderOpenFinderFeedsTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updateCellWithDataSource:(id)a0 guideTips:(id)a1;
- (void)layoutViews;
- (void)onClickContentAction;
- (void)horizonViewClickItemWith:(id)a0;
- (void).cxx_destruct;

@end
