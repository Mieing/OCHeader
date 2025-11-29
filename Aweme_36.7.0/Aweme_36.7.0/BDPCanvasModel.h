@class NSString;

@interface BDPCanvasModel : NSObject <NSCopying>

@property (nonatomic) double left;
@property (nonatomic) double top;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) BOOL disableScroll;

- (void).cxx_destruct;
- (id)init;
- (id)initWithWidth:(double)a0 height:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
