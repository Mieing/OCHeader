@class WCFinderAnimationLoadingView, UIImageView, UIView, RichTextView, UIButton;
@protocol WCFinderLocationLbsTableViewCellDelegate;

@interface WCFinderLocationLbsTableViewCell : UITableViewCell

@property (retain, nonatomic) RichTextView *nameTextView;
@property (retain, nonatomic) RichTextView *distanceTextView;
@property (retain, nonatomic) RichTextView *rewardTextView;
@property (retain, nonatomic) RichTextView *dividerTextView;
@property (retain, nonatomic) RichTextView *moreTextView;
@property (retain, nonatomic) UIButton *moreBtn;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *separatorLine;
@property (weak, nonatomic) id<WCFinderLocationLbsTableViewCellDelegate> delegate;

+ (double)textAreaMaxWidth:(double)a0;
+ (id)stringWithCustomLink:(id)a0 searchString:(id)a1;
+ (double)cellHeightWithConfig:(id)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (void)layoutAllSubviews;
- (void)prepareForReuse;
- (void)updateWithConfig:(id)a0 searchWord:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
