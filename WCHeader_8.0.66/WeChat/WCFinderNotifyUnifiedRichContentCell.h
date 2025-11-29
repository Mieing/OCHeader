@class WCFinderRichTextView;

@interface WCFinderNotifyUnifiedRichContentCell : WCFinderNotifyUnifiedTableViewCell

@property (weak, nonatomic) WCFinderRichTextView *contentTextView;

+ (double)getHeightWithViewModel:(id)a0 width:(double)a1;

- (void)setUpUI;
- (void)setUpViewLayout;
- (void)prepareForReuse;
- (void)updateNofiyCenterCellWithViewModel:(id)a0 width:(double)a1;
- (void).cxx_destruct;

@end
