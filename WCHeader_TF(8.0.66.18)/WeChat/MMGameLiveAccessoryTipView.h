@class MMUILabel, RichTextView;

@interface MMGameLiveAccessoryTipView : MMUIView

@property (nonatomic) struct CGSize { double width; double height; } selfSize;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) RichTextView *descLabel;

- (id)init;
- (void)layoutSubviews;
- (void)checkSelfSizeChanged;
- (void)createUI;
- (void)createTitleLabel;
- (void)createDescLabel;
- (void)updateTitleDescOrigin;
- (double)standardWidth;
- (double)currContentScale;
- (id)descTitle;
- (id)descContent;
- (double)lineSpace;
- (void).cxx_destruct;

@end
