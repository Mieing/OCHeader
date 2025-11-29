@class UIView;

@interface MMLiveMorphTransitionParameters : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceFrame;
@property (retain, nonatomic) UIView *primaryView;
@property (nonatomic) struct CGSize { double width; double height; } mediaSize;

- (void).cxx_destruct;

@end
