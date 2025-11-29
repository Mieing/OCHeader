@class UIView;

@interface IESECShopViewOperationItem : NSObject

@property (weak, nonatomic) UIView *opView;
@property (nonatomic) unsigned long long op;
@property (nonatomic) unsigned long long reverseOp;
@property (nonatomic) BOOL animating;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) unsigned long long index;
@property (weak, nonatomic) UIView *superView;

- (void).cxx_destruct;

@end
