@class RichTextView;

@interface WCFinderNotifyUnifiedMentionTableViewCell : WCFinderNotifyUnifiedTableViewCell

@property (weak, nonatomic) RichTextView *contentTextView;

+ (double)getHeightWithViewModel:(id)a0 width:(double)a1;

- (void)setUpUI;
- (void)setUpViewLayout;
- (void)prepareForReuse;
- (void)updateNofiyCenterCellWithViewModel:(id)a0 width:(double)a1;
- (double)contentBottomOffset;
- (void).cxx_destruct;

@end
