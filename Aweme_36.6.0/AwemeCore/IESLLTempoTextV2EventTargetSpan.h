@class IESLLTempoNode;

@interface IESLLTempoTextV2EventTargetSpan : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (weak, nonatomic) IESLLTempoNode *node;

- (id)initWithNode:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
