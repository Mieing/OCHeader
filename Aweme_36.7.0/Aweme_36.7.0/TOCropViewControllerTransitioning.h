@class UIImage, NSString, UIView;

@interface TOCropViewControllerTransitioning : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic) BOOL isDismissing;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIView *fromView;
@property (retain, nonatomic) UIView *toView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fromFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } toFrame;
@property (copy, nonatomic) id /* block */ prepareForTransitionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
