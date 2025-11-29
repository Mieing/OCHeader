@class NSString;

@interface IESIMInnerQuoteBlockCustomDraw : NSObject <IESIMTextCustomDrawingProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preDrawTextWithTextLayoutManager:(id)a0 textRange:(id)a1 context:(struct CGContext { } *)a2 drawOrigin:(struct CGPoint { double x0; double x1; })a3 isCancelled:(id /* block */)a4;
- (id)lineColor;

@end
