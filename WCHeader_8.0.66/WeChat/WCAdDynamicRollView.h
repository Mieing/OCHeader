@class WCAdDynamicFeedElementRollTextInfo;

@interface WCAdDynamicRollView : WCAdRollView

@property (retain, nonatomic) WCAdDynamicFeedElementRollTextInfo *styleInfo;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataItem:(id)a1 iconUrl:(id)a2 textList:(id)a3 styleInfo:(id)a4;
- (void)updateDynamicStyle;
- (void)updateDynamicRollTextWithTextList:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
