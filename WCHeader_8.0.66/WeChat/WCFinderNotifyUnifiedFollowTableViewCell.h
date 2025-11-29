@class WCFinderRichTextView;

@interface WCFinderNotifyUnifiedFollowTableViewCell : WCFinderNotifyUnifiedTableViewCell

@property (weak, nonatomic) WCFinderRichTextView *contentTextView;

+ (double)getHeightWithViewModel:(id)a0 width:(double)a1;

- (void)setUpUI;
- (void)setUpViewLayout;
- (void)updateNofiyCenterCellWithViewModel:(id)a0 width:(double)a1;
- (void).cxx_destruct;

@end
