@class UIImage;

@interface OMJHandleBoxItem : NSObject

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) struct CGSize { double width; double height; } touchSize;
@property (readonly, nonatomic) long long corner;
@property (readonly, nonatomic) unsigned long long actionType;
@property (readonly, nonatomic) SEL action;
@property (readonly, weak, nonatomic) id target;

- (id)initWithImage:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 corner:(long long)a2 actionType:(unsigned long long)a3;
- (id)initWithImage:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 corner:(long long)a2 target:(id)a3 action:(SEL)a4;
- (id)description;
- (void).cxx_destruct;

@end
