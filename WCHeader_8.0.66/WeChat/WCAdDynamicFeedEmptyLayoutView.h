@class NSString, WCAdDynamicFeedElementInfo, WCAdDynamicFeedBackgroundButton, UIView;
@protocol WCAdDynamicFeedEmptyLayoutViewDelegate;

@interface WCAdDynamicFeedEmptyLayoutView : MMUIView <WCAdDynamicFeedBackgroundButtonDelegate>

@property (retain, nonatomic) WCAdDynamicFeedBackgroundButton *backgroundButton;
@property (retain, nonatomic) UIView *highlightedCoverView;
@property (nonatomic) BOOL isLayoutClickable;
@property (retain, nonatomic) WCAdDynamicFeedElementInfo *elementInfo;
@property (weak, nonatomic) id<WCAdDynamicFeedEmptyLayoutViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 elementInfo:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)resetSubViews;
- (void)onBackgroundButtonClicked:(id)a0;
- (void)onDynamicFeedBackgroundButtonSetHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end
