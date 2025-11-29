@class UIViewController, UIView;

@interface IESECShopAttachmentInfo : NSObject

@property (weak, nonatomic) UIView *view;
@property (weak, nonatomic) UIView *superView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) unsigned long long index;
@property (weak, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) UIViewController *parentViewController;

+ (id)infoWithViewController:(id)a0;
+ (id)infoWithResponder:(id)a0;
+ (id)infoWithView:(id)a0;

- (void).cxx_destruct;

@end
