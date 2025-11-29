@class UIImage;

@interface AWEDPlayerGeneralElementConfig : NSObject

@property (nonatomic) unsigned long long elementType;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitTestEdgeInsets;
@property (nonatomic) struct CGSize { double width; double height; } buttonSize;
@property (copy, nonatomic) id /* block */ createIconBlock;

- (void).cxx_destruct;
- (id)initWithElementType:(unsigned long long)a0;

@end
