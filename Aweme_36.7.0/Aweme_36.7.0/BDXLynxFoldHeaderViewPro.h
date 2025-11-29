@protocol BDXLynxFoldHeaderViewProDelegate;

@interface BDXLynxFoldHeaderViewPro : LynxUI

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } headerViewFrame;
@property (readonly, nonatomic) BOOL fold;
@property (weak, nonatomic) id<BDXLynxFoldHeaderViewProDelegate> delegate;

+ (void)lynxLazyLoad;

- (void)layoutDidFinished;
- (void).cxx_destruct;
- (id)createView;

@end
