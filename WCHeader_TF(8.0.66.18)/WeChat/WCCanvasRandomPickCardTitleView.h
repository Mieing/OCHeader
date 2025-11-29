@class UILabel, WCCanvasComponentRandomPickCardTitleInfo;
@protocol WCCanvasRandomPickCardTitleViewDelegate;

@interface WCCanvasRandomPickCardTitleView : UIView

@property (retain, nonatomic) WCCanvasComponentRandomPickCardTitleInfo *titleInfo;
@property (weak, nonatomic) id<WCCanvasRandomPickCardTitleViewDelegate> delegate;
@property (nonatomic) unsigned long long pendingState;
@property (retain, nonatomic) UILabel *titlePrefix;
@property (retain, nonatomic) UILabel *highlightedContent;
@property (retain, nonatomic) UILabel *titleSuffix;
@property (retain, nonatomic) UILabel *allCollectedLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 titleInfo:(id)a1 delegate:(id)a2;
- (void)generateSubviews;
- (void)layoutSubviews;
- (id)generateSimpleLabelWithTextColor:(id)a0 text:(id)a1;
- (id)fetchHighlightedContentText;
- (void)updateViewWithState:(unsigned long long)a0;
- (void).cxx_destruct;

@end
