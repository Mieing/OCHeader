@interface WCFinderPreviewActionSheet : MMScrollActionSheet

@property (nonatomic) struct CGSize { double width; double height; } blankSize;
@property (nonatomic) struct CGSize { double width; double height; } topMediaSize;

- (BOOL)isIpadCase;
- (BOOL)useCornerCancelButton;
- (void)dismissAnimated:(BOOL)a0;
- (void)relayoutElements:(BOOL)a0 fixedWidth:(double)a1 duration:(double)a2;
- (void)_calculateContainerCenter:(struct CGPoint { double x0; double x1; } *)a0 to:(struct CGPoint { double x0; double x1; } *)a1 constraintWidth:(double)a2 parentView:(id)a3;
- (void)onSubSceneSizeChangedFrom:(struct CGSize { double x0; double x1; })a0 to:(struct CGSize { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })calculateSheetCenter:(id)a0;
- (void)relayoutContainerView;

@end
