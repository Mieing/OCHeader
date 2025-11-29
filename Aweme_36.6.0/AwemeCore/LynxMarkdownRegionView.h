@class LynxMarkdownBundle, NSMutableSet, NSString;

@interface LynxMarkdownRegionView : UIView <MarkdownCanvasCallback>

@property (retain, nonatomic) LynxMarkdownBundle *bundle;
@property (nonatomic) int index;
@property (retain, nonatomic) NSMutableSet *showedView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)SetInlineViewVisible:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
