@class UIImageView, WCFinderSizingRichTextView;

@interface WCFinderNotifyUnifiedLikeTableViewCell : WCFinderNotifyUnifiedTableViewCell

@property (weak, nonatomic) UIImageView *likeImageView;
@property (weak, nonatomic) WCFinderSizingRichTextView *contentTextView;

+ (double)getHeightWithViewModel:(id)a0 width:(double)a1;

- (void)setUpUI;
- (void)setUpViewLayout;
- (void)prepareForReuse;
- (void)updateNofiyCenterCellWithViewModel:(id)a0 width:(double)a1;
- (void).cxx_destruct;

@end
