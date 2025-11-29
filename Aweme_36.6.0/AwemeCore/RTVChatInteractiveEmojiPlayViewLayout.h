@interface RTVChatInteractiveEmojiPlayViewLayout : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } region;

- (struct CGPoint { double x0; double x1; })generateAvailablePointBasedOnCurrnetItems:(id)a0;
- (struct CGPoint { double x0; double x1; })__generateAvailablePointBaseCurrentItems:(id)a0;
- (struct CGPoint { double x0; double x1; })__randomGeneratePointInRegion;
- (double)__valueOfPoint:(struct CGPoint { double x0; double x1; })a0 toItems:(id)a1;
- (double)__valueFromPoint:(struct CGPoint { double x0; double x1; })a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)__distanceToRegionCenterFromPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
