@class NSData;

@interface SrSVGView : UIView {
    NSData *_svgDoc;
    struct unique_ptr<serval::svg::parser::SrSVGDOM, std::default_delete<serval::svg::parser::SrSVGDOM>> { struct SrSVGDOM *__ptr_; } _svgDom;
}

- (void)parseContent:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithString:(id)a0;
- (id).cxx_construct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
