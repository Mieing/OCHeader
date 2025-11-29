@class WCAdDynamicFeedElementInfo;

@interface WCAdDynamicFeedRichTextView : RichTextView

@property (retain, nonatomic) WCAdDynamicFeedElementInfo *elementInfo;

- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)appendNotifications;
- (void)onMenuControllerWillHide:(id)a0;
- (void).cxx_destruct;

@end
