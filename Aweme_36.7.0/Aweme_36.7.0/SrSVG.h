@class NSData;

@interface SrSVG : NSObject {
    NSData *_svgDoc;
    struct unique_ptr<serval::svg::parser::SrSVGDOM, std::default_delete<serval::svg::parser::SrSVGDOM>> { struct SrSVGDOM *__ptr_; } _svgDom;
}

- (id)getSrSvgDrawImageWithData:(id)a0 andSize:(struct CGSize { double x0; double x1; })a1 andCallback:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithString:(id)a0;
- (id).cxx_construct;

@end
