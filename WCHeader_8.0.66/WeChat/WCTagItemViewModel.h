@class UIImage, WCTagItem, UIView;

@interface WCTagItemViewModel : NSObject

@property (readonly, nonatomic) UIImage *tagImage;
@property (readonly, nonatomic) UIView *tagView;
@property (retain, nonatomic) WCTagItem *tagItem;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } tagViewFrame;

- (id)initWithTagItem:(id)a0 tagViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
