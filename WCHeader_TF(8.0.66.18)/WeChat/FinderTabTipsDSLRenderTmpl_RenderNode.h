@class FinderTabTipsDSLRenderTmpl_RenderNode_RenderAttr, FinderTabTipsDSLRenderTmpl_RenderNode_RenderContent;

@interface FinderTabTipsDSLRenderTmpl_RenderNode : WXPBGeneratedMessage

@property (nonatomic) int style;
@property (retain, nonatomic) FinderTabTipsDSLRenderTmpl_RenderNode_RenderContent *content;
@property (retain, nonatomic) FinderTabTipsDSLRenderTmpl_RenderNode_RenderAttr *attr;

+ (void)initialize;

- (void)setAttr:(id)a0;
- (id)attr;
- (void)setContent:(id)a0;
- (id)content;
- (void)setStyle:(int)a0;
- (int)style;
- (BOOL)isAloneNodeCurIndex:(long long)a0 mergedCapsuleAttr:(id)a1;
- (BOOL)isValidNodeAsNodeStyle:(unsigned long long)a0;
- (id)contentAsNodeStyle:(unsigned long long)a0;
- (int)staticIconAsNodeStyle:(unsigned long long)a0;
- (id)pendantAsNodeStyle:(unsigned long long)a0;
- (id)iconUrlAsNodeStyle:(unsigned long long)a0;
- (id)imageKeyAsNodeStyle:(unsigned long long)a0;
- (BOOL)useAbbreviateAsNodeStyle:(unsigned long long)a0;

@end
