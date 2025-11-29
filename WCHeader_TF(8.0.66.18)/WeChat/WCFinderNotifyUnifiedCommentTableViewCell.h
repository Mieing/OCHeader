@class WCFinderNotifyAttachDisplayView, RichTextView, MMUIButton;

@interface WCFinderNotifyUnifiedCommentTableViewCell : WCFinderNotifyUnifiedTableViewCell

@property (weak, nonatomic) RichTextView *contentTextView;
@property (weak, nonatomic) MMUIButton *commentDeleteLabel;
@property (retain, nonatomic) WCFinderNotifyAttachDisplayView *displayAttachmentView;
@property (nonatomic) struct CGPoint { double x; double y; } beginTouchPoint;

+ (double)getHeightWithViewModel:(id)a0 width:(double)a1;

- (void)setUpUI;
- (void)setUpViewLayout;
- (void)prepareForReuse;
- (void)updateNofiyCenterCellWithViewModel:(id)a0 width:(double)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)forbidHightLightCell;
- (void).cxx_destruct;

@end
