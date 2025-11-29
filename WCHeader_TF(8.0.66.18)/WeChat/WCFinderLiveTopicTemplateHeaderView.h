@class MMLiveColorfulLabel, NSString, RichTextView, MMUIButton;

@interface WCFinderLiveTopicTemplateHeaderView : UIView <RichTextLayoutDelegate, ILinkEventExt>

@property (retain, nonatomic) MMLiveColorfulLabel *titleLabel;
@property (retain, nonatomic) RichTextView *subtitleTextView;
@property (retain, nonatomic) MMUIButton *detailButton;
@property (copy, nonatomic) id /* block */ onClickSubtitleDetail;
@property (nonatomic) BOOL expandSubtitle;
@property (nonatomic) double bottomPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (double)getTitleSpaceToBottom;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)configWithAppearance:(id)a0;
- (void)didClickSubtitle;
- (void)onTextClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withView:(id)a2;
- (double)lineWidthAtY:(double)a0 lineIndex:(long long)a1 richTextView:(id)a2;
- (void).cxx_destruct;

@end
