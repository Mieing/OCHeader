@class UIImageView, UILabel;

@interface MMFinderLiveTableStyleAudienceSubmitOrderCommentPubbleCell : MMFinderLiveTableStyleCommentPubbleCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *buttonLabel;

+ (struct CGSize { double x0; double x1; })preferSizeForCellFrame:(id)a0;

- (id)initWithCellFrame:(id)a0;
- (BOOL)isUITypeValid;
- (void)layoutUI;
- (void)layoutCommentLabel;
- (void)didMoveToWindow;
- (void).cxx_destruct;

@end
