@class NSString, UIFont;

@interface LSIMTagModel : NSObject

@property (readonly, copy, nonatomic) NSString *content;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (readonly, nonatomic) UIFont *font;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL canSelect;
@property (nonatomic) BOOL isSelected;

- (id)initWithContent:(id)a0 contentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 font:(id)a2;
- (struct CGSize { double x0; double x1; })calcSize;
- (void).cxx_destruct;

@end
