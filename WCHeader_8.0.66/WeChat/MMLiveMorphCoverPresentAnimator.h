@class NSString, UIView;

@interface MMLiveMorphCoverPresentAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceFrame;
@property (retain, nonatomic) UIView *coverView;
@property (nonatomic) struct CGSize { double width; double height; } coverSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
