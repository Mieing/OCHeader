@class WCSVGCanvas;

@interface WCSVGImage : NSObject

@property (retain, nonatomic) WCSVGCanvas *mainCanvas;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewBox;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;

+ (id)imageData:(id)a0 resize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;
+ (id)imageNamed:(id)a0;
+ (id)imageNamed:(id)a0 color:(id)a1;
+ (id)imageNamed:(id)a0 color:(id)a1 alpha:(double)a2;
+ (id)imageNamed:(id)a0 color:(id)a1 alpha:(double)a2 rotate:(double)a3;
+ (id)imageNamed:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)imageNamed:(id)a0 size:(struct CGSize { double x0; double x1; })a1 color:(id)a2;
+ (id)imageNamed:(id)a0 size:(struct CGSize { double x0; double x1; })a1 color:(id)a2 alpha:(double)a3 rotate:(double)a4;
+ (id)imageWithContentsOfFile:(id)a0 size:(struct CGSize { double x0; double x1; })a1 color:(id)a2 alpha:(double)a3 rotate:(double)a4;
+ (id)adaptedWeSVGImageWithName:(id)a0 data:(id)a1 config:(id)a2;
+ (id)imageData:(id)a0 fromConfig:(id)a1;
+ (id)svgDataWithName:(id)a0;
+ (id)imageNamed:(id)a0 fromConfig:(id)a1;

- (void).cxx_destruct;

@end
