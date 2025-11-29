@class NSString, UIImage;

@interface DrawImageCommand : LolaDrawCommand

@property (nonatomic) struct CGPoint { double x; double y; } origin;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (copy, nonatomic) NSString *subType;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) UIImage *image;

- (void)parsePoint:(id)a0;
- (void)configWithData:(id)a0 context:(id)a1;
- (void)draw:(id)a0 context:(struct CGContext { } *)a1;
- (void)parseRect:(id)a0;
- (void)parseComplete:(id)a0;
- (void).cxx_destruct;
- (id)typeStr;
- (void)recycle;

@end
