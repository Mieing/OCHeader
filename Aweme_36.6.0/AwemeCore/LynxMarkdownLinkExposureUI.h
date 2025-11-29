@class NSString, LynxMarkdownLink;

@interface LynxMarkdownLinkExposureUI : LynxUI {
    NSString *_uniqueID;
    LynxMarkdownLink *_link;
}

- (BOOL)enableExposureUIMargin;
- (id)getExposeReceiveTarget;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getBoundingClientRectToScreen;
- (double)exposureMarginTop;
- (double)exposureMarginBottom;
- (double)exposureMarginLeft;
- (double)exposureMarginRight;
- (id)getUniqueID;
- (id)initWithView:(id)a0 uniqueID:(id)a1 link:(id)a2;
- (id)getOption;
- (void).cxx_destruct;
- (id)getData;
- (BOOL)isVisible;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
