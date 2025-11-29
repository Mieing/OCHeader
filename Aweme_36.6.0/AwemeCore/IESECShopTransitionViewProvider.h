@class UIView;

@interface IESECShopTransitionViewProvider : NSObject

@property (nonatomic) double alpha;
@property (retain, nonatomic) UIView *superView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } convertedFrame;
@property (weak, nonatomic) UIView *view;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialFrame;

+ (id)providerWithView:(id)a0;

- (void).cxx_destruct;

@end
