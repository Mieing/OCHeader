@class MMUILabel, WCAdTagNode, WCAdDynamicFeedElementInfo, WCAdURLImageView;

@interface WCAdDynamicFeedTagElementView : UIView

@property (retain, nonatomic) WCAdDynamicFeedElementInfo *styleInfo;
@property (retain, nonatomic) WCAdTagNode *nodeInfo;
@property (retain, nonatomic) WCAdURLImageView *iconView;
@property (retain, nonatomic) MMUILabel *textView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleInfo:(id)a1 nodeInfo:(id)a2;
- (void)generateTagElement;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
