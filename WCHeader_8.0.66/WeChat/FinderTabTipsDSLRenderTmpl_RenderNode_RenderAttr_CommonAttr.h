@class FinderTabTipsDSLRenderTmpl_RenderNode_Color;

@interface FinderTabTipsDSLRenderTmpl_RenderNode_RenderAttr_CommonAttr : WXPBGeneratedMessage

@property (nonatomic) unsigned int size;
@property (retain, nonatomic) FinderTabTipsDSLRenderTmpl_RenderNode_Color *color;
@property (nonatomic) unsigned int line;
@property (nonatomic) int verticalAlign;

+ (void)initialize;

- (void)setVerticalAlign:(int)a0;
- (int)verticalAlign;
- (void)setLine:(unsigned int)a0;
- (unsigned int)line;
- (void)setColor:(id)a0;
- (id)color;
- (void)setSize:(unsigned int)a0;
- (unsigned int)size;

@end
